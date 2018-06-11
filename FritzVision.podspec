
Pod::Spec.new do |s|
  s.name = 'FritzVision'
  s.version = '1.0.2'
  s.summary = 'Official Fritz SDK for Swift 4 and Objective-C'
  s.homepage = 'https://github.com/fritzlabs/swift-sdk'
  s.license = {
    :type => 'Apache 2.0', :text => 'hiii'
  }
  s.author = { 'Andrew Barba' => 'andrew@fritz.ai' }
  s.source = {
    :http => 'https://github.com/fritzlabs/cocoapods-test-repo/raw/master/FritzVision-1.0.1.tar.gz'
  }

  s.requires_arc = true
  s.dependency 'FritzCore', '1.0.5'
  s.ios.deployment_target = '11.0'
  # s.macos.deployment_target = '10.13'
  s.watchos.deployment_target = '4.0'
  s.tvos.deployment_target = '11.0'
  s.frameworks = 'CoreML', 'UIKit'

  s.vendored_frameworks = 'Frameworks/FritzVision.framework'

end
