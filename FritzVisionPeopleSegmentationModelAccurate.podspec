Pod::Spec.new do |s|
  s.name = 'FritzVisionPeopleSegmentationModelAccurate'
  s.version = '4.1.0'
  s.summary = 'Official Fritz SDK for Swift 4.1 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = { :type => 'Commercial', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'chris@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.1.0/FritzVisionPeopleSegmentationModelAccurate.zip' }
  s.requires_arc = true

  s.ios.deployment_target = '10.0'
  s.swift_version = '4.2'
  s.frameworks = 'UIKit', 'CoreML', 'Foundation'

  s.dependency 'FritzBase/Vision', '~> 4.1.0'
  s.vendored_framework = 'Frameworks/FritzVisionPeopleSegmentationModelAccurate.framework'
end
