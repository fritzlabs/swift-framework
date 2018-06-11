
Pod::Spec.new do |s|
  s.name = 'FritzCore'
  s.version = '1.0.5'
  s.summary = 'Official Fritz SDK for Swift 4 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = {
    :type => 'Apache 2.0', :text => 'License goes here'
  }
  s.author = { 'Andrew Barba' => 'andrew@fritz.ai' }
  s.source = {
    :http => 'https://github.com/fritzlabs/cocoapods-test-repo/raw/master/FritzCore-1.0.3.tar.gz'
  }

  s.requires_arc = true
  s.ios.deployment_target = '11.0'
  # s.macos.deployment_target = '10.13.5'
  s.watchos.deployment_target = '4.0'
  s.tvos.deployment_target = '11.0'
  s.frameworks = 'UIKit'

  s.vendored_frameworks = 'Frameworks/FritzCore.framework'

end
