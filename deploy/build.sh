#!/bin/bash
DOCS=docs/merged_docs.json
size=$(wc -c < $DOCS)
if [ $size -lt 1000 ]; then
    echo "${DOCS} file was suspiciously small.  Perhaps they didn't build correctly?"
    exit 1
fi


echo Generating Jazzy docs
jazzy \
    --clean \
    --author "Fritz Labs Incorporated" \
    --author_url https://www.fritz.ai \
    --github_url https://github.com/fritzlabs/swift-framework \
    --sourcekitten-sourcefile $DOCS \
    --output build/ \
    --theme jazzy/theme/fritz

cp -r ./build/* /build/.
