Pod::Spec.new do |s|
  s.name = 'FritzBase'
  s.version = '6.0.0-beta.1'
  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'
  s.homepage = 'https://www.fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :http => 'https://fritz-swift-sdk-release-production.s3.amazonaws.com/FritzBase/6.0.0-beta.1/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.1'

  s.default_subspec = 'ManagedModel'

  s.subspec 'Core' do |core|
    core.vendored_framework = 'Frameworks/FritzCore.framework', 'Frameworks/Fritz.framework'
  end

  s.subspec 'ManagedModel' do |analytics|
    analytics.dependency 'FritzBase/Core', '6.0.0-beta.1'
    analytics.vendored_framework = 'Frameworks/FritzManagedModel.framework'
    analytics.preserve_path = 'Frameworks/FritzManagedModel.framework/build-encrypted-model.sh'
  end

  s.subspec 'CoreMLHelpers' do |helpers|
    helpers.vendored_framework = 'Frameworks/CoreMLHelpers.framework', '6.0.0-beta.1'
  end

  s.subspec 'Vision' do |helpers|
    helpers.dependency 'FritzBase/Core', '6.0.0-beta.1'
    helpers.dependency 'FritzBase/CoreMLHelpers', '6.0.0-beta.1'
    helpers.dependency 'FritzBase/ManagedModel', '6.0.0-beta.1'
    helpers.vendored_framework = 'Frameworks/FritzVision.framework'
  end
end
