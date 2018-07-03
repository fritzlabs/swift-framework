import re
import os
import glob
import plistlib
import logging
from invoke import task, Collection
import semver


_logger = logging.getLogger(__name__)
logging.basicConfig(level=logging.INFO)


def yes(question: str):
    """Prompt user to input y[es]/n[o] to a yes or no question.

    Args:
        question: Question to answer

    Returns: True if yes, False if no.
    """
    answer = input(question + " (y/n): ").lower().strip()

    while answer not in ['y', 'n', 'yes', 'no']:
        print("Input yes or no")
        answer = input(question + "(y/n):").lower().strip()

    if answer.startswith('y'):
        return True
    else:
        return False


def _git_modified_files():
    """Check for modified files on branch.

    Returns: True if modified, False otherwise
    """
    return os.system('git diff-index --quiet HEAD --') != 0


def _get_current_version(filename: str) -> str:
    """Gets current version from podspec file.

    Args:
        filename: name of podspec file.

    Returns: semvar version in podspec
    """
    with open(filename, 'r') as f:
        version_lines = [line for line in f if 's.version = ' in line]
        if len(version_lines) > 1:
            # The Fritz.podspec file shouldn't change for this to be a problem,
            # but this is definitely brittle. If it breaks often, we can figure
            # out a less hacky way.
            raise Exception("Found multiple lines with version. "
                            "There can only be one.")

    line = version_lines[0]
    match = re.match(".*'(.*)'.*", line)
    return match.groups(0)[0]


def _update_podspec(filename: str, current_version: str, new_version: str):
    _logger.info('Updating %s from %s -> %s', filename, current_version,
                 new_version)

    final_lines = []
    with open(filename, 'r') as f:
        for line in f:
            if 's.version = ' in line:
                line = line.replace(current_version, new_version)
            final_lines.append(line)

    with open(filename, 'w') as f:
        f.write(''.join(final_lines))


def _update_info_plists(new_version: str):
    """Update Info.plist files for all frameworks.

    Args:
        new_version: Version to update plist files with.
    """
    for filename in glob.glob('Frameworks/*.framework/Info.plist'):
        with open(filename, 'rb') as f:
            plist = plistlib.load(f)
            current_version = plist['CFBundleShortVersionString']
            plist['CFBundleShortVersionString'] = new_version

        _logger.info('Updating %s from %s -> %s', filename, current_version,
                     new_version)

        with open(filename, 'wb') as f:
            plistlib.dump(plist, f)


def _update_changelog(new_version: str):
    """Update CHANGELOG.md with user inputted updates.

    Args:
        new_version: semver new version to update.
    """
    if not yes("Update Changelog file?"):
        _logger.info("Not updating Changelog.")
        return

    changes = []
    changes.append(input("[" + str(len(changes) + 1) + "] "))
    while yes("Add another note to CHANGELOG.md?"):
        changes.append(input("[" + str(len(changes) + 1) + "] "))

    template = [
        '',
        '## [{version}]({github_base}/releases/tag/{version})',
        '',
        *['{}. {}'.format(i + 1, change) for i, change in enumerate(changes)],
        ''
    ]
    template = '\n'.join(template).format(
        version=new_version,
        github_base='https://github.com/fritzlabs/swift-framework'
    )

    with open('CHANGELOG.md') as f:
        lines = f.readlines()

    for i, line in enumerate(lines):
        if line == '---\n':
            lines = [*lines[:i + 1], template, *lines[i + 1:]]
            break

    with open('CHANGELOG.md', 'w') as f:
        f.write(''.join(lines))


@task
def update_version(ctx):
    """Update version number in Podspec and Frameworks."""
    if _git_modified_files():
        _logger.error('Branch must be clean before updating version spec. '
                      'Clean up modified files and try again.')
        return

    _logger.info('Updating lastest master branch')
    os.system('git checkout master')
    os.system('git pull origin master')

    current_version = _get_current_version('Fritz.podspec')
    new_version = semver.bump_prerelease(current_version, token='beta')
    _update_changelog(new_version)
    _update_podspec('Fritz.podspec', current_version, new_version)
    _update_info_plists(new_version)

    os.system('git commit -am "Bump to version {}"'.format(new_version))


@task(default=True)
def list_tasks(ctx):
    """Default: Lists all available tasks"""
    ctx.run("invoke --list")
