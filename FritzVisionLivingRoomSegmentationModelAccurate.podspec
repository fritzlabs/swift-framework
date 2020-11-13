Pod::Spec.new do |s|
  s.name = 'FritzVisionLivingRoomSegmentationModelAccurate'
  s.version = '6.1.1'
  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Commercial', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'chris@fritz.ai' }
  s.source = { :http => 'https://fritz-swift-sdk-release-production.s3.amazonaws.com/FritzVisionLivingRoomSegmentationModelAccurate/6.1.1/FritzVisionLivingRoomSegmentationModelAccurate.zip' }
  s.requires_arc = true

  s.ios.deployment_target = '12.0'
  s.swift_version = '5.1'
  s.frameworks = 'UIKit', 'CoreML', 'Foundation'

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.dependency 'FritzBase/Vision', '~> 6.1.1'
  s.vendored_framework = 'Frameworks/FritzVisionLivingRoomSegmentationModelAccurate.framework'
end
