Pod::Spec.new do |s|
  s.name = 'FritzVisionRigidPose'
  s.version = '4.2.2'
  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.2.0/FritzVisionRigidPose.zip' }

  s.requires_arc = true
  s.static_framework = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.dependency 'FritzBase/Vision', '~> 4.2.0'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.1'

  s.vendored_framework = 'Frameworks/FritzVisionRigidPose.framework'
  s.prefix_header_file = 'Frameworks/FritzVisionRigidPose.framework/Headers/PrefixHeader.pch'

end
