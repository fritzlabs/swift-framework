Pod::Spec.new do |s|
  s.name = 'FritzSDK'
  s.version = '1.0.8'
  s.summary = 'Official Fritz SDK for Swift 4 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = {
    :type => 'Apache 2.0', :text => 'License goes here'
  }
  s.author = { 'Andrew Barba' => 'andrew@fritz.ai' }
  s.default_subspec = 'FritzCore'
  s.source = { :git => 'https://github.com/fritzlabs/swift-framework.git',
               :branch => 'SDK-58-fritz-sdk-frameworks' }
  s.requires_arc = true

  s.ios.deployment_target = '11.0'
  # s.macos.deployment_target = '10.13'
  s.watchos.deployment_target = '4.0'
  s.tvos.deployment_target = '11.0'
  s.frameworks = 'UIKit', 'CoreML'

  s.subspec 'CoreOnly' do |core|
    core.dependency 'FritzSDK/FritzCore'
    core.preserve_paths = 'CoreOnly/Sources/module.modulemap'
    core.source_files = 'CoreOnly/Sources/FritzSDK.h'
    core.user_target_xcconfig = {
      "HEADER_SEARCH_PATHS": "$(inherited) ${PODS_ROOT}/FritzSDK/CoreOnly/Sources"
    }
  end

  s.subspec 'FritzCore' do |core|
    core.vendored_framework = 'FritzCore.framework'
  end

  s.subspec 'FritzVision' do |vision|
    vision.dependency 'FritzSDK/CoreOnly'
    vision.vendored_framework = 'FritzVision.framework'
  end

  s.subspec 'FritzVisionModel' do |vision|
    vision.dependency 'FritzSDK/CoreOnly'
    vision.dependency 'FritzSDK/FritzVision'
    vision.vendored_framework = 'FritzVisionModel.framework'
  end
end
