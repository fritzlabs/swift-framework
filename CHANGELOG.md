Change Log
==========

`Fritz` follows [Semantic Versioning](http://semver.org/)

---

## [4.4.0](https://github.com/fritzlabs/swift-framework/releases/tag/4.4.0)

1. Separating out Pattern Style Transfer Models into their own subspec.

## [4.3.0](https://github.com/fritzlabs/swift-framework/releases/tag/4.3.0)

1. Releasing 4.3.0

## [4.3.0-beta.5](https://github.com/fritzlabs/swift-framework/releases/tag/4.3.0-beta.5)

1. Merging flexible and rigid style transfer.

## [4.3.0-beta.4](https://github.com/fritzlabs/swift-framework/releases/tag/4.3.0-beta.4)

1. Updating People And Pet segmentaiton model.

## [4.3.0-beta.3](https://github.com/fritzlabs/swift-framework/releases/tag/4.3.0-beta.3)

1. Preview version of new FritzVisionVideo API.
2. Update for Xcode 11.2

## [4.3.0-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/4.3.0-beta.2)

1. Fixing NaN bug in pose smoother.

## [4.3.0-beta.1](https://github.com/fritzlabs/swift-framework/releases/tag/4.3.0-beta.1)

1. Add Pattern Style Models.
2. Non-flexible style transfer is now deprecated, use FritzVisionStylePredictor for style models going forward.
3. Revert Accurate image segmentation model to previous version as results were better.
4. Changed object detection model to add postprocessing in Core ML Model.
5. Model downloads now resume progress if interrupted.
6. Updating Pose model to check model metadata for output_stride.

## [4.2.5](https://github.com/fritzlabs/swift-framework/releases/tag/4.2.5)

1. Passing BlendKernel through in FritzVisionImage.blend function.

## [4.2.4](https://github.com/fritzlabs/swift-framework/releases/tag/4.2.4)

1. Standardizing all UIImages to be backed by Core Image objects. Before APIs returned a mix of UIImages backed by `cgImage` and `ciImage`.

## [4.2.3](https://github.com/fritzlabs/swift-framework/releases/tag/4.2.3)

1. Fix Podspec source files to point to proper version.

## [4.2.2](https://github.com/fritzlabs/swift-framework/releases/tag/4.2.2)

1. Make FritzVisionLabelModelFast and FritzVisionObjectModelFast targets optional in Fritz framework.

## [4.2.1](https://github.com/fritzlabs/swift-framework/releases/tag/4.2.1)

1. Adding model version pinning to all OTA model downloads.
2. Adding a blurRadius option to Segmentation Masks.
3. Pinning Fast People Seg model to proper version.
4. Updating pinned label model.

## [4.2.0](https://github.com/fritzlabs/swift-framework/releases/tag/4.2.0)

1. Adding model variants for all segmentation models.

## [4.1.2](https://github.com/fritzlabs/swift-framework/releases/tag/4.1.2)

1. Updating People Segmentation Accurate model.
2. Adding model version pinning.

## [4.1.1](https://github.com/fritzlabs/swift-framework/releases/tag/4.1.1)

1. Fixing People Segmentation Fast podspec to not download both Fast and Small models.

## [4.1.0](https://github.com/fritzlabs/swift-framework/releases/tag/4.1.0)

1. Building with Xcode 11 GM.

## [4.0.1](https://github.com/fritzlabs/swift-framework/releases/tag/4.0.1)

1. Fixing issue where pose smoothing could return NaN if date was the same.

## [4.0.0](https://github.com/fritzlabs/swift-framework/releases/tag/4.0.0)


Breaking changes
----------------

## Renamed models

### People Segmentation Models:

Introducing models optimized for different use cases:
 * Fast models are optimized for runtime performance with an accuracy tradeoff. This should be used in cases where model predictions need to happen quickly (e.g video processing, live preview, etc). This comes with a tradeoff in accuracy.
 * Accurate models are optimized to display the best model prediction with a speed tradeoff. This should be used in cases where you're dealing with still images (i.e photo editing)
 * Small models are optimized for model size at the cost of accuracy. This should be used in cases where developers are cautious of bloating their apps with models.
Models now have their own versioning system separate from the SDK and follow semantic versioning.

```diff
-  pod 'Fritz/VisionSegmentationModel/People'
+  pod 'Fritz/VisionSegmentationModel/People/Fast'
```

```diff
-  FritzVisionPeopleSegmentationModel()
+  FritzVisionPeopleSegmentationModelFast()
```

```diff
-  pod 'Fritz/VisionSegmentationModel/PeopleMedium'
+  pod 'Fritz/VisionSegmentationModel/People/Accurate'
```

```diff
-  FritzVisionPeopleSegmentationMediumModel()
+  FritzVisionPeopleSegmentationModelAccurate()
```


## FritzVisionImage API

Size is no longer an optional:

```diff
-  let image: FritzVisionImage
-  guard let size = image.size else { }
+  let image: FritzVisionImage
+  let size = image.size
```

Image blending:

```diff
-  let mask: UIImage
-  let image: FritzVisionImage
-  image.blend(withMask: mask, blendMode: .softLight, interpolationQuality: .medium)
+  let mask: UIImage
+  let image: FritzVisionImage
+  image.blend(withMask: mask, blendKernel: .softLight, resizeSamplingMethod: .lanczos)
```

## Image Segmentation Mask API

```diff
-  let result: FritzVisionSegmentationResult
-  let mask = result.toImageMask(
-    minThreshold: 0.5,
-    alpha: 255
-    resize: true
-  )
+  let result: FritzVisionSegmentationResult
+  let mask = result.buildMultiClassMask(
+    withMinimumAcceptedScore: 0.5,
+    maxAlpha: 255
+    resize: true
+  )
```

```diff
-  let result: FritzVisionSegmentationResult
-  let mask = result.toImageMask(
-    of: .person,
-    threshold: 0.7,
-    minThresholdAccepted: 0.4
-  )
+  let result: FritzVisionSegmentationResult
+  let mask = result.buildSingleClassMask(
+    forClass: .person,
+    clippingScoresAbove: 0.7,
+    zeroingScoresBelow: 0.4
+  )
```

### Pose Estimation API

```diff
-  FritzVisionPoseModel()
+  FritzVisionHumanPoseModel()
```

```diff
-  let keypoint = Keypoint(id: 0, position: Point(x: 0.0, y: 0.0), score: 0.0, part: .leftElbow)
+  let keypoint = Keypoint<HumanSkeleton>(
+    index: 0,
+    position: CGPoint(x: 0.0, y: 0.0),
+    score: 0.0,
+    part: .leftElbow
+  )
```


All usages of ``Point`` have been replaced with ``CGPoint``.

## [4.0.0-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/4.0.0-beta.2)

1. Building for Xcode 10.
2. Fix linking to FritzVisionRigidPoseModel.

## [4.0.0-beta.1](https://github.com/fritzlabs/swift-framework/releases/tag/4.0.0-beta.1)

1. Updating Pose Predictor with Generics. FritzVisionPoseModel is now FritzVisionHumanPoseModel.
2. Removing deprecated functions.

## [3.7.0-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.7.0-beta.2)

1. Updating for Xcode 1 Beta 6

## [3.7.0-beta.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.7.0-beta.1)

1. Building for Xcode 11 Beta 5

## [3.7.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.7.0)

1. Updating pose model. Runs faster with higher accuracy!
2. Refactoring some pose logic. Pose results retrieved by `poseResult.pose()` are in the range 0 to 1.

## [swift-framework](https://github.com/fritzlabs/swift-framework/releases/tag/swift-framework)

1. Building for Xcode 11 Beta 5.

## [3.6.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.6.3)

1. Fixing device orientation listener.

## [3.6.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.6.2)

1. Update Image processing pipeline to use GPU more effectively. See speedups of 50%.
2. Fix image rotation to take device orientation into account with initializing from AVCaptureConnection.

## [3.6.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.6.1)

1. Add in masked function in FritzVisionImage

## [3.6.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.6.0)

1. Fixing documentation.

## [3.5.8](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.8)

1. Build with swift 5.0

## [3.5.7](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.7)

1. Fix multi pose results
2. Expose objective-c method for buildSingleClassMask

## [3.5.6](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.6)

1. Decrease minimum Deployment target to 9.0.

## [3.5.5](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.5)

1. Fixed pose scaling in drawPose function.

## [3.5.4](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.4)

1. Remove hardcoded number of keypoints for CustomPoseSmoother.

## [3.5.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.3)

1. Add Sky Segmentation model to Fritz podspec.

## [3.5.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.2)

1. Fix Pet and Sky seg linking in Fritz to be optional.

## [3.5.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.1)

1. Bump version to fix push to cocoapods

## [3.5.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.0)

1. Adding Sky Segmentation Model.
2. Add Rigid Body pose model to support lifting 2D pose models to 3D space.

## [3.5.0-beta.4](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.0-beta.4)

1. Fix some rotation issues in rigid pose model.
2. Use CIImage to prepare images for Core ML pipeline.

## [3.5.0-beta.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.0-beta.3)

1. Add pose smoothing to custom pose models.

## [3.5.0-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.0-beta.2)

1. Fixing Rigid Pose Build

## [3.5.0-beta.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.5.0-beta.1)

1. Add Rigid Pose model lifting points from 2D -> 3D using Open CV.
2. Add custom pose model predictor for models built with fritz model training library.

## [3.4.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.4.0)

1. Add Pet Segmentation Model.

## [3.3.6](https://github.com/fritzlabs/swift-framework/releases/tag/3.3.6)

1. Force Core ML predictions by default. A bug has popped up into how we handle some images in the Vision framework.

## [3.3.5](https://github.com/fritzlabs/swift-framework/releases/tag/3.3.5)

1. Add support for forcing predictions to use the Vision framework.

## [3.3.4](https://github.com/fritzlabs/swift-framework/releases/tag/3.3.4)

1. Update Hair Segmentation model.

## [3.3.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.3.3)

1. Add multi pose, people seg medium, and people and pets segmentation model medium to public SDK.

## [3.3.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.3.2)

1. Fix Core ML cropping bug.
2. Add Multi Pose, People Segmentation Medium, and People and Pets Segmentation to public Fritz Pod

## [3.3.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.3.1)

1. Fix center crop when using Core ML.
2. Fix Model ID for the Outdoor model.

## [3.3.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.3.0)

1. Adding blending option for FritzVisionImages.
2. Updating ImageSegmentation result API.

## [3.2.5](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.5)

1. Add initial support for custom object detection models.

## [3.2.4](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.4)

1. Added hair segmentation model.

## [3.2.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.3)

1. Update build process.

## [3.2.3-beta.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.3-beta.3)

1. Updating deploy process

## [3.2.3-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.3-beta.2)

1. Updating release process.  All frameworks are now zipped in release.

## [3.2.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.2)

1. Add pose smoothing.


## [3.2.0-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.0-beta.2)

1. Internal code restructuring.
2. Add a new predict method for easier predictions:

```
import Fritz

let image = FritzVisionImage(...)
let model = FritzVisionPoseModel()

let result = try model.predict(image)
```


## [3.2.0-beta.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.2.0-beta.1)

1. Updating to Swift 5.
2. Fixing Linking issues in Objective-C
3. Add option to resize Style transfer image output to original size.

## [3.1.7](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.7)

1. Fix model version being incorrectly set when downloading model for first time using `fetchModel`.

## [3.1.6](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.6)

1. Add option to skip cache on model update check.
2. Add option to delete all versions of a managed model.

## [3.1.5](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.5)

1. Fix loading managed model from prepackaged model for Fritz Features.

## [3.1.4](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.4)

1. Add functionality to load from prepackaged model without keeping it around at runtime.
2. Fix Fritz framework to properly export available frameworks.

## [3.1.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.3)

1. Make loadModel function public to synchronously load models from OTA.

## [3.1.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.2)

1. Adding enum for Fritz Paintings to access models individually.

## [3.1.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.1)

1. Added override to force processing using Core ML instead of the Vision framework.

## [3.1.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.1.0)

1. Expose ManagedModel on all VisionModels
2. Add a public protocol for interacting with all FritzVision models.
3. Fix SwiftIdentifiedModel download (using shared downloader).

## [3.0.1](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.1)

1. Adding FritzVisionMultiPoseModel to Fritz Framework.

## [3.0.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.0)

Highlights ✨
-------------

- Added pose estimation feature. You can use the `FritzVisionPoseModel` to detect human figures in images and video ([Documentation](https://docs.fritz.ai/develop/vision/pose-estimation/ios.html)).
- Added ability to download `FritzVision` models over the air ([Documentation](https://docs.fritz.ai/develop/vision/pose-estimation/ios.html#download-the-model-over-the-air)).
- Standardized feature APIs across all `FritzVision` models ([API Reference](https://docs.fritz.ai/iOS/3.0.0/index.html)).
- Added ability to download custom models by tags ([Documentation](https://docs.fritz.ai/develop/custom-models/tag-based/ios.html)).
- Added user-configurable metadata to Custom Models. ([Documentation](https://docs.fritz.ai/develop/custom-models/tag-based/index.html)).
- Simplified dependencies. All feature models are now included in the `FritzVision` target.
- Fixed many broken Objective-C interfaces.

Breaking changes
----------------

- All `VisionModelOptions` objects no longer can be configured during initialization.  You can configure model options after creating an options object:

```diff
-  let modelOptions = FritzVisionLabelModelOptions(threshold: 0.5, numResults: 10)
+  let modelOptions = FritzVisionLabelModelOptions()
+  modelOptions.threshold = 0.5
+  modelOptions.numResults = 10
```

- All models now run with a default `imageCropAndScaleOption` of `.scaleFit`.  You will have to make the following changes to keep the same behavior:

```diff
-  let modelOptions = FritzVisionLabelModelOptions()
+  let modelOptions = FritzVisionLabelModelOptions()
+  modelOptions.imageCropAndScaleOption = .centerCrop
```

This is especially important for the object detection model as the crop and scale option affects the placement of the bounding boxes.
```diff
-  let modelOptions = FritzVisionObjectModelOptions()
+  let modelOptions = FritzVisionObjectModelOptions()
+  modelOptions.imageCropAndScaleOption = .centerCrop
```

- Changed access to `label` and `confidence` on `FritzVisionObject` to simplify access:

```diff
- visionObject.label.label
- visionObject.label.confidence
+ visionObject.label
+ visionObject.confidence
```



## [3.0.0-beta.7](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.0-beta.7)

1. Fixing Pose Detection result filtering

## [3.0.0-beta.6](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.0-beta.6)

1. Fixing up pose api

## [3.0.0-beta.5](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.0-beta.5)

1. Adding Models to FritzVision framework

## [3.0.0-beta.3](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.0-beta.3)

1. Add getter to access metadata

## [3.0.0-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.0-beta.2)

1. Adding in Model Metadata
2. Adding option to download models using cellular data
3. Additional functionality on Style Transfer to load from tags.

## [3.0.0](https://github.com/fritzlabs/swift-framework/releases/tag/3.0.0)

1. did a lot of things will update more later.

## [2.4.1](https://github.com/fritzlabs/swift-framework/releases/tag/2.4.1)

1. Change default model settings to scaleFit.
2. Add FritzVisionFlexibleStyleTransferModel to use for flexible style transfer models.

## [2.4.0](https://github.com/fritzlabs/swift-framework/releases/tag/2.4.0)

1. Fix OTA Model loading issues
2. Update people, living room, and outdoor segmentation models to use newer versions of models
3. Don’t use neural engine for image segmentation models to improve performance

## [2.3.4](https://github.com/fritzlabs/swift-framework/releases/tag/2.3.4)

1. Corrupt Over The Air model downloads no longer triggers a crash.

## [2.3.3](https://github.com/fritzlabs/swift-framework/releases/tag/2.3.3)

1. Update People Segmentation model.

## [2.3.2](https://github.com/fritzlabs/swift-framework/releases/tag/2.3.2)

1. Expose original prediction result in FritzVisionSegmentationResult.

## [2.3.1](https://github.com/fritzlabs/swift-framework/releases/tag/2.3.1)

1. Fix Objective-C annotations.

## [2.3.0](https://github.com/fritzlabs/swift-framework/releases/tag/2.3.0)

1. Updated image segmentation processing.  Existing models should now be faster!
2. Added a higher quality People Segmentation Model.
3. Added ability to download models over the air without needing to include it in the application bundle.

## [2.2.2](https://github.com/fritzlabs/swift-framework/releases/tag/2.2.2)

1. Fix aspect ratio problem on Style Transfer by using Core ML directly.

## [2.2.1](https://github.com/fritzlabs/swift-framework/releases/tag/2.2.1)

1. Fix bug in FritzVision to add better UIImage support.

## [2.2.0](https://github.com/fritzlabs/swift-framework/releases/tag/2.2.0)

1. Add Public FritzVisionStyleModel you can use to add your own style models
2. Separate painting styles into their own framework.

## [2.1.0](https://github.com/fritzlabs/swift-framework/releases/tag/2.1.0)

1. Finalizing Fritz Vision Segmentation Model

## [2.1.0-beta.2](https://github.com/fritzlabs/swift-framework/releases/tag/2.1.0-beta.2)

1. Add outdoor scene
2. Actually use Fritz to report metrics of segmentation model

## [2.1.0-beta.1](https://github.com/fritzlabs/swift-framework/releases/tag/2.1.0-beta.1)

1. Add CoreMLHelpers package.
2. Add People and Living Room Segmentation Models.
3. Add features to FritzVision to resize images.

## [2.0.0](https://github.com/fritzlabs/swift-framework/releases/tag/2.0.0)

1. Built with Swift 4.2

## [1.1.3](https://github.com/fritzlabs/swift-framework/releases/tag/1.1.3)

1. Add Objective C support for FritzVisionStyleModel

## [1.1.2](https://github.com/fritzlabs/swift-framework/releases/tag/1.1.2)

1. Guard against Gzip returning empty data
2. Fix Fritz Metrics tracking in Feature SDKs

## [1.1.1](https://github.com/fritzlabs/swift-framework/releases/tag/1.1.1)

1. Add new styles to FritzStyleVision.

## [1.1.0](https://github.com/fritzlabs/swift-framework/releases/tag/1.1.0)

1. Add async prediction functions.
2. Add FritzStyleVision for live video style transfer.

## [1.0.0](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0)

1. We're now out of Beta! To add machine learning features to your app [create an account](https://app.fritz.ai/register).
1. Updating API Client to be more configurable from server.
2. Update FritzImageOrientation class to better communicate image orientation options.

## [1.0.0-beta.22](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.22)

1. Uses a single shared SessionManager across all models

## [1.0.0-beta.21](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.21)

1. Move some functionality from FritzManagedModel to FritzCore
2. Add support for including Fritz-Info.plist
3. Build tests from all frameworks
4. Session now optional in SwiftIdentifiedModel

## [1.0.0-beta.20](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.20)

1. Add Fritz tracking to label and object models
2. Speed up sigmoid calculation by using Accelerate functions

## [1.0.0-beta.19](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.19)

1. Use vision framework for Label model predictions
2. Add FritzVisionObjectModel for real time object detection.
3. Add FritzVisionObjectModelOptions and FritzVisionLabelModelOptions to configure model prediction behavior.
4. Built with Swift 4.1.2.

## [1.0.0-beta.18](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.18)

1. Properly fix version string in user agent

## [1.0.0-beta.17](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.17)

1. Switch back to Swift 4.0 for compatibility with older Xcode version
2. Require client to be on Wifi before downloading model OTA updates.

## [1.0.0-beta.16](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.16)

1. Built with Swift 4.1

## [1.0.0-beta.15](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.15)

1. Hot fix for un-signed shell script

## [1.0.0-beta.14](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.14)

1. Support iOS 10 as minimum iOS Deployment Target
2. Add new FritzCore, FritzVision, and FritzVisionLabelModel subspecs
3. Built with Swift 4.0

## [1.0.0-beta.13](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.13)

1. Support encrypted models
2. Fix missing scripts
3. Fix write permission issue when decrypting an encrypted model
4. Fix framework archive not including symbols for the iOS Simulator

## [1.0.0-beta.12](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.12)

1. Support encrypted models
2. Fix missing scripts
3. Fix write permission issue when decrypting an encrypted model

## [1.0.0-beta.11](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.11)

1. Support encrypted models
2. Fix missing scripts

## [1.0.0-beta.10](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.10)

1. Support encrypted models

## [1.0.0-beta.9](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta.9)

1. Fix semantic version beta number

## [1.0.0-beta8](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta8)

1. Built with Swift 4.1

## [1.0.0-beta7](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta7)

1. Internal API naming changes

## [1.0.0-beta6](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta6)

1. Support basic model input/output sampling

## [1.0.0-beta5](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta5)

1. Support app settings configured from the Fritz dashboard

## [1.0.0-beta4](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta4)

1. Add SDK logging

## [1.0.0-beta3](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta3)

1. Fix an unnecessary model download on first run

## [1.0.0-beta2](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta2)

1. More reliable model downloads
2. Properly send `Error`s as json

## [1.0.0-beta1](https://github.com/fritzlabs/swift-sdk/releases/tag/1.0.0-beta1)

Initial beta release.
