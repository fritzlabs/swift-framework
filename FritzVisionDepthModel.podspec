Pod::Spec.new do |s|
  s.name = 'FritzVisionDepthModel'
  s.version = '4.3.0-beta.4'
  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.3.0-beta.4/FritzVisionDepthModel.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.dependency 'FritzBase/Vision', '4.3.0-beta.4'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.1'

  s.vendored_framework = 'Frameworks/FritzVisionDepthModel.framework'
end
