#!/bin/bash

echo Generating Jazzy docs
jazzy \
    --clean \
    --author "Fritz Labs Incorporated" \
    --author_url https://fritz.ai \
    --github_url https://github.com/fritzlabs/swift-framework \
    --sourcekitten-sourcefile docs/merged_docs.json \
    --output build/ \
    --theme jazzy/theme/fritz

cp -r ./build/* /build/.
