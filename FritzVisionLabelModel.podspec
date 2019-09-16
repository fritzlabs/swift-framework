Pod::Spec.new do |s|
  s.name = 'FritzVisionLabelModel'
  s.version = '4.1.1'
  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.1.0/FritzVisionLabelModel.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.dependency 'FritzBase/Vision', '~> 4.1.0'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.0'

  s.vendored_framework = 'Frameworks/FritzVisionLabelModel.framework'
end
