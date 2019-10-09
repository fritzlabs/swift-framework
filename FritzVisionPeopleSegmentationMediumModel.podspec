Pod::Spec.new do |s|
  s.name = 'FritzVisionPeopleSegmentationMediumModel'
  s.version = '4.2.3'
  s.summary = 'Official Fritz SDK for Swift 4.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Commercial', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'chris@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.0.0-beta.2/FritzVisionPeopleSegmentationMediumModel.zip' }
  s.requires_arc = true

  s.ios.deployment_target = '10.0'
  s.swift_version = '4.2'
  s.frameworks = 'UIKit', 'CoreML', 'Foundation'

  s.dependency 'FritzBase/Vision', '4.2.3'
  s.vendored_framework = 'Frameworks/FritzVisionPeopleSegmentationMediumModel.framework'
end
