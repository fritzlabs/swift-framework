Pod::Spec.new do |s|
  s.name = 'FritzVisionLabelModelFast'
  s.version = '6.1.2-beta.2'
  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://fritz-swift-sdk-release-production.s3.amazonaws.com/FritzVisionLabelModelFast/6.1.2-beta.2/FritzVisionLabelModelFast.zip' }
  s.requires_arc = true

  s.ios.deployment_target = '12.0'
  s.swift_version = '5.1'
  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.dependency 'FritzBase/Vision', '6.1.2-beta.2'
  s.vendored_framework = 'Frameworks/FritzVisionLabelModelFast.framework'
end
