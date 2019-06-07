Pod::Spec.new do |s|
  s.name = 'FritzVisionSkySegmentationModel'
  s.version = '3.5.0'
  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'chris@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/3.5.0/FritzVisionSkySegmentationModel.zip' }

  s.requires_arc = true
  s.ios.deployment_target = '10.0'
  s.swift_version = '5.0'
  s.frameworks = 'UIKit', 'CoreML'

  s.dependency 'FritzBase/Vision', '3.5.0'

  s.vendored_framework = 'Frameworks/FritzVisionSkySegmentationModel.framework'
end
