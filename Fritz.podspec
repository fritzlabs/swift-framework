Pod::Spec.new do |s|
  s.name = 'Fritz'
  s.author = 'Fritz'
  s.version = '1.0.0-beta1'
  s.summary = 'Official Fritz SDK for Swift 4 and Objective-C'
  s.homepage = 'https://github.com/fritzlabs/swift-framework'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE' }
  s.source = { :git => 'https://github.com/fritzlabs/swift-framework.git', :tag => s.version.to_s }
  
  s.requires_arc = true

  s.ios.deployment_target = '11.0'
  s.macos.deployment_target = '10.13'
  s.watchos.deployment_target = '4.0'
  s.tvos.deployment_target = '11.0'

  s.framework = 'CoreML'
  s.vendored_frameworks = 'Framework/Fritz.framework'
end
