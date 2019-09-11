Pod::Spec.new do |s|
  s.name = 'FritzVisionMultiPoseModel'
  s.version = '4.0.1'
  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = { :type => 'Commercial', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.0.0/FritzVisionMultiPoseModel.zip' }

  s.requires_arc = true

  s.ios.deployment_target = '10.0'
  s.swift_version = '5.0'
  s.frameworks = 'UIKit', 'CoreML', 'Foundation'

  s.dependency 'FritzBase/Vision', '~> 4.0.0'

  s.vendored_framework = 'Frameworks/FritzVisionMultiPoseModel.framework'
end
