
Pod::Spec.new do |s|
  s.name = 'FritzVisionModel'
  s.version = '1.0.2'
  s.summary = 'Official Fritz SDK for Swift 4 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = {
    :type => 'Apache 2.0', :text => 'License goes here'
  }
  s.author = { 'Andrew Barba' => 'andrew@fritz.ai' }
  s.source = {
    :http => 'https://github.com/fritzlabs/cocoapods-test-repo/raw/master/FritzVisionModel-1.0.0.tar.gz'
  }

  s.requires_arc = true

  s.ios.deployment_target = '11.0'
  # s.macos.deployment_target = '10.13'
  s.watchos.deployment_target = '4.0'
  s.tvos.deployment_target = '11.0'
  s.frameworks = 'CoreML', 'UIKit'
  s.dependency 'FritzVision', '1.0.2'
  s.dependency 'FritzCore', '1.0.5'
  s.vendored_frameworks = 'Frameworks/FritzVisionModel.framework'

end
