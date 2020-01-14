Pod::Spec.new do |s|
  s.name = 'FritzVisionPetSegmentationModelAccurate'
  s.version = '5.1.0'
  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Commercial', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'chris@fritz.ai' }
  s.source = { :http => 'https://fritz-swift-sdk-release-production.s3.amazonaws.com/FritzVisionPetSegmentationModelAccurate/5.1.0/FritzVisionPetSegmentationModelAccurate.zip' }
  s.requires_arc = true

  s.ios.deployment_target = '10.0'
  s.swift_version = '5.1'
  s.frameworks = 'UIKit', 'CoreML', 'Foundation'

  s.dependency 'FritzBase/Vision', '~> 5.1.0'
  s.vendored_framework = 'Frameworks/FritzVisionPetSegmentationModelAccurate.framework'
end
