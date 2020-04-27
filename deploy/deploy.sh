#!/bin/bash
set -eo pipefail

BUILD_DIR=$1
TAG=$2
S3_BUCKET=fritz-docs

echo Pushing docs folder $BUILD_DIR $TAG
aws s3 cp $BUILD_DIR/ s3://${S3_BUCKET}/iOS/${TAG}/ --recursive --only-show-errors

# # write the redirects to this version
echo Pushing redirect
sed "s/CI_BRANCH/$TAG/g" deploy/redirect.html > /tmp/index.html
aws s3 cp /tmp/index.html s3://${S3_BUCKET}/iOS/index.html --only-show-errors
aws s3 cp /tmp/index.html s3://${S3_BUCKET}/iOS/latest/index.html --only-show-errors
