Pod::Spec.new do |s|
  s.name = 'FritzVisionHumanPoseModelFast'
  s.version = '5.2.0'
  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://fritz-swift-sdk-release-production.s3.amazonaws.com/FritzVisionHumanPoseModelFast/5.2.0/FritzVisionHumanPoseModelFast.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.dependency 'FritzBase/Vision', '~> 5.1.0'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.1'

  s.vendored_framework = 'Frameworks/FritzVisionHumanPoseModelFast.framework'
end
