#!/bin/bash

FRAMEWORK=$1
VERSION=$2

BASE_DIR=${FRAMEWORK}-${VERSION}
FRAMEWORKS_DIR=${BASE_DIR}/Frameworks

mkdir -p ${FRAMEWORKS_DIR}
cp -r ${FRAMEWORK}.framework ${FRAMEWORKS_DIR}/

tar -zcvf ${BASE_DIR}.tar.gz ${BASE_DIR}
rm -rf ${BASE_DIR}

cp ${BASE_DIR}.tar.gz ../cocoapods-test-repo
pushd ../cocoapods-test-repo
git pull
git add ${BASE_DIR}.tar.gz
git commit -m "Updating ${BASE_DIR}.tar.gz"
git push
