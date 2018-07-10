Pod::Spec.new do |s|
  s.name = 'Fritz'
  s.version = '1.0.0-beta.19'
  s.summary = 'Official Fritz SDK for Swift 4.1 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Andrew Barba' => 'andrew@fritz.ai' }
  s.source = { :git => 'https://github.com/fritzlabs/swift-framework.git', :tag => s.version.to_s }
  s.requires_arc = true

  s.ios.deployment_target = '10.0'
  s.swift_version = '4.0'
  s.frameworks = 'UIKit', 'CoreML', 'Foundation'

  s.default_subspec = 'ManagedModel'

  s.subspec 'ManagedModel' do |analytics|
    analytics.dependency 'Fritz/Core'
    analytics.vendored_framework = 'Frameworks/FritzManagedModel.framework'
  end

  s.subspec 'Core' do |core|
    core.preserve_paths = 'CoreOnly/Sources/module.modulemap'
    core.source_files = 'CoreOnly/Sources/Fritz.h'
    core.user_target_xcconfig = {
      "HEADER_SEARCH_PATHS": "$(inherited) ${PODS_ROOT}/Fritz/CoreOnly/Sources"
    }
    core.vendored_framework = 'Frameworks/FritzCore.framework'
  end

  s.subspec 'Vision' do |vision|
    vision.dependency 'Fritz/Core'
    vision.vendored_framework = 'Frameworks/FritzVision.framework'
  end

  s.subspec 'VisionLabelModel' do |vision|
    vision.dependency 'Fritz/Core'
    vision.dependency 'Fritz/Vision'
    vision.vendored_framework = 'Frameworks/FritzVisionLabelModel.framework'
  end
end
