
Pod::Spec.new do |s|
  s.name = 'FritzSDK'
  s.module_name = 'FritzSDK'
  s.version = '1.0.7'
  s.summary = 'Official Fritz SDK for Swift 4 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = {
    :type => 'Apache 2.0', :text => 'License goes here'
  }
  s.author = { 'Andrew Barba' => 'andrew@fritz.ai' }
  s.default_subspec = 'Core'
  s.source = { :http => 'https://github.com/fritzlabs/cocoapods-test-repo/raw/master/CoreOnly-1.0.2.tar.gz'}
  s.requires_arc = true

  s.preserve_paths = '**/Sources/module.modulemap'
  s.source_files = '**/FritzSDK.h'

  s.ios.deployment_target = '11.0'
  # s.macos.deployment_target = '10.13'
  s.watchos.deployment_target = '4.0'
  s.tvos.deployment_target = '11.0'

  s.subspec 'CoreOnly' do |core|
    core.dependency 'FritzCore', '1.0.5'
    core.preserve_paths = '**/module.modulemap'
    core.source_files = '**/FritzSDK.h'
    core.user_target_xcconfig = {
      "HEADER_SEARCH_PATHS": "$(inherited) ${PODS_ROOT}/FritzSDK/Sources"
    }
  end

  s.subspec 'Core' do |core|
    core.dependency 'FritzSDK/CoreOnly'
    core.frameworks = 'UIKit'
  end

  s.subspec 'FritzVision' do |vision|
    vision.dependency 'FritzSDK/CoreOnly'
    vision.dependency 'FritzVision', '1.0.2'
  end

  s.subspec 'FritzVisionModel' do |vision|
    vision.dependency 'FritzSDK/CoreOnly'
    vision.dependency 'FritzVisionModel', '1.0.2'
  end
end
