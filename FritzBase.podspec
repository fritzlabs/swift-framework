Pod::Spec.new do |s|
  s.name = 'FritzBase'
  s.version = '3.5.8'
  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/3.5.8/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.0'

  s.default_subspec = 'ManagedModel'

  s.subspec 'Core' do |core|
    core.vendored_framework = 'Frameworks/FritzCore.framework', 'Frameworks/Fritz.framework'
  end

  s.subspec 'ManagedModel' do |analytics|
    analytics.dependency 'FritzBase/Core', '3.5.8'
    analytics.vendored_framework = 'Frameworks/FritzManagedModel.framework'
    analytics.preserve_path = 'Frameworks/FritzManagedModel.framework/build-encrypted-model.sh'
  end

  s.subspec 'CoreMLHelpers' do |helpers|
    helpers.vendored_framework = 'Frameworks/CoreMLHelpers.framework', '3.5.8'
  end

  s.subspec 'Vision' do |helpers|
    helpers.dependency 'FritzBase/Core', '3.5.8'
    helpers.dependency 'FritzBase/CoreMLHelpers', '3.5.8'
    helpers.dependency 'FritzBase/ManagedModel', '3.5.8'
    helpers.vendored_framework = 'Frameworks/FritzVision.framework'
  end
end
