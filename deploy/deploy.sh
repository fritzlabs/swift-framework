#!/bin/bash

S3_BUCKET=fritz-docs

echo Pushing docs folder $CI_BRANCH
aws s3 cp /docs/ s3://${S3_BUCKET}/iOS/${CI_BRANCH}/ --recursive --quiet

# write the redirects to this version
echo Pushing redirect
sed -e "s/CI_BRANCH/$CI_BRANCH/g" deploy/redirect.html > /tmp/index.html
aws s3 cp /tmp/index.html s3://${S3_BUCKET}/iOS/index.html --quiet
aws s3 cp /tmp/index.html s3://${S3_BUCKET}/iOS/latest/index.html --quiet
