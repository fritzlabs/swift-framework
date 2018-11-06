################################################################################
#
# Copyright © 2018 Fritz Labs Incorporated. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
################################################################################

FILE_BASE=${INPUT_FILE_BASE%.*}

# Create temporary folder for all resources to live in.
TEMP_MODEL_DIR=${TEMP_FILES_DIR}/${FILE_BASE}
mkdir -p ${TEMP_MODEL_DIR}

# .encrypted.mlmodel file is just a gzipped tar file. Extract to temp folder.
tar -xvf ${INPUT_FILE_PATH} -C $TEMP_MODEL_DIR

# Move to properly named file.
mv ${TEMP_MODEL_DIR}/model.mlmodel ${TEMP_MODEL_DIR}/${FILE_BASE}.mlmodel

# Determine if should generate swift or obj-c file
if [ -z ${SWIFT_VERSION+x} ];
then
    LANGUAGE_CONFIG="--language Objective-C"
else
    LANGUAGE_CONFIG="--language Swift --swift-version ${SWIFT_VERSION}"
fi

# Generate core ml file, saving in sources directory.
${DEVELOPER_BIN_DIR}/coremlc generate ${TEMP_MODEL_DIR}/${FILE_BASE}.mlmodel ${DERIVED_SOURCES_DIR}/ ${LANGUAGE_CONFIG}

# Rename the file.  You must specify the output file name in the
# build rule definition.  This output file is the file that gets
# passed to be compiled.  Unfortunately we can't do any fancy bash
# and because the glob for identifiying this file is *.encrypted.
# we have to have the output file include .encrypted (as it is the
# INPUT_FILE_BASE env variable.
mv ${DERIVED_SOURCES_DIR}/${FILE_BASE}.swift ${DERIVED_SOURCES_DIR}/${INPUT_FILE_BASE}.swift

# Move the actual encrypted resource to the resources folder.
# This will include the model in the app.
mv ${TEMP_MODEL_DIR}/encrypted ${CONFIGURATION_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/${FILE_BASE}.mlmodele

# Rename the file.  You must specify the output file name in the
# build rule definition.  This output file is the file that gets
# passed to be compiled.  Unfortunately we can't do any fancy bash
# and because the glob for identifiying this file is *.encrypted.
# we have to have the output file include .encrypted (as it is the
# INPUT_FILE_BASE env variable.
${DEVELOPER_BIN_DIR}/coremlc compile ${TEMP_MODEL_DIR}/${FILE_BASE}.mlmodel ${DERIVED_SOURCES_DIR}/

# Remove previous version of compiled resources.
rm -rf ${CONFIGURATION_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/${FILE_BASE}.mlmodelc

mv ${DERIVED_SOURCES_DIR}/${FILE_BASE}.mlmodelc ${CONFIGURATION_BUILD_DIR}/${UNLOCALIZED_RESOURCES_FOLDER_PATH}/
