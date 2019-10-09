Pod::Spec.new do |s|
  s.name = 'FritzVisionPetSegmentationModel'
  s.version = '4.2.3'
  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'chris@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.1.0/FritzVisionPetSegmentationModel.zip' }

  s.requires_arc = true
  s.ios.deployment_target = '10.0'
  s.swift_version = '5.0'
  s.frameworks = 'UIKit', 'CoreML'

  s.dependency 'FritzBase/Vision', '~> 4.1.0'

  s.vendored_framework = 'Frameworks/FritzVisionPetSegmentationModel.framework'
end
