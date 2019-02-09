Change Log
==========

`Fritz` follows [Semantic Versioning](http://semver.org/)

---

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

## [1.0.0-beta.17](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.17)

1. Switch back to Swift 4.0 for compatibility with older Xcode version
2. Require client to be on Wifi before downloading model OTA updates.

## [1.0.0-beta.16](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.16)

1. Built with Swift 4.1

## [1.0.0-beta.15](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.15)

1. Hot fix for un-signed shell script

## [1.0.0-beta.14](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.14)

1. Support iOS 10 as minimum iOS Deployment Target
2. Add new FritzCore, FritzVision, and FritzVisionLabelModel subspecs
3. Built with Swift 4.0

## [1.0.0-beta.13](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.13)

1. Support encrypted models
2. Fix missing scripts
3. Fix write permission issue when decrypting an encrypted model
4. Fix framework archive not including symbols for the iOS Simulator

## [1.0.0-beta.12](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.12)

1. Support encrypted models
2. Fix missing scripts
3. Fix write permission issue when decrypting an encrypted model

## [1.0.0-beta.11](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.11)

1. Support encrypted models
2. Fix missing scripts

## [1.0.0-beta.10](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.10)

1. Support encrypted models

## [1.0.0-beta.9](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta.9)

1. Fix semantic version beta number

## [1.0.0-beta8](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta8)

1. Built with Swift 4.1

## [1.0.0-beta7](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta7)

1. Internal API naming changes

## [1.0.0-beta6](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta6)

1. Support basic model input/output sampling

## [1.0.0-beta5](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta5)

1. Support app settings configured from the Fritz dashboard

## [1.0.0-beta4](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta4)

1. Add SDK logging

## [1.0.0-beta3](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta3)

1. Fix an unnecessary model download on first run

## [1.0.0-beta2](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta2)

1. More reliable model downloads
2. Properly send `Error`s as json

## [1.0.0-beta1](https://github.com/fritzlabs/swift-framework/releases/tag/1.0.0-beta1)

Initial beta release.
