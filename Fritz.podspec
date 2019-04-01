Pod::Spec.new do |s|
  s.name = 'Fritz'
  s.version = '3.2.0-beta.1'
  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }
  s.source = { :git => 'https://github.com/fritzlabs/swift-framework.git', :tag => s.version.to_s }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.0'

  s.default_subspec = 'ManagedModel'

  s.subspec 'Core' do |core|
    core.vendored_frameworks = 'Frameworks/FritzCore.framework', 'Frameworks/Fritz.framework'
  end

  s.subspec 'ManagedModel' do |analytics|
    analytics.dependency 'Fritz/Core'
    analytics.vendored_framework = 'Frameworks/FritzManagedModel.framework'
    analytics.preserve_path = 'Frameworks/FritzManagedModel.framework/build-encrypted-model.sh'
  end

  s.subspec 'CoreMLHelpers' do |helpers|
    helpers.vendored_framework = 'Frameworks/CoreMLHelpers.framework'
  end

  s.subspec 'Vision' do |vision|
    vision.dependency 'Fritz/Core'
    vision.dependency 'Fritz/CoreMLHelpers'
    vision.dependency 'Fritz/ManagedModel'
    vision.vendored_framework = 'Frameworks/FritzVision.framework'
  end

  s.subspec 'VisionLabelModel' do |vision|
    vision.dependency 'Fritz/Vision'
    vision.vendored_framework = 'Frameworks/FritzVisionLabelModel.framework'
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.dependency 'Fritz/Vision'
    vision.vendored_framework = 'Frameworks/FritzVisionObjectModel.framework'
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.dependency 'Fritz/Vision'
    vision.vendored_framework = 'Frameworks/FritzVisionPoseModel.framework'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'Fritz/Vision'
      paintings.vendored_framework = 'Frameworks/FritzVisionStyleModelPaintings.framework'
    end
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |people|
      people.dependency 'Fritz/Vision'
      people.vendored_framework = 'Frameworks/FritzVisionPeopleSegmentationModel.framework'
    end

    vision.subspec 'LivingRoom' do |livingroom|
      livingroom.dependency 'Fritz/Vision'
      livingroom.vendored_framework = 'Frameworks/FritzVisionLivingRoomSegmentationModel.framework'
    end

    vision.subspec 'Outdoor' do |outdoor|
      outdoor.dependency 'Fritz/Vision'
      outdoor.vendored_framework = 'Frameworks/FritzVisionOutdoorSegmentationModel.framework'
    end
  end
end
