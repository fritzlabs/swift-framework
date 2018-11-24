Pod::Spec.new do |s|
  s.name = 'Fritz'
  s.version = '2.3.1'
  s.summary = 'Official Fritz SDK for Swift 4.1 and Objective-C'
  s.homepage = 'https://fritz.ai'
  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }
  s.author = { 'Andrew Barba' => 'andrew@fritz.ai' }
  s.source = { :git => 'https://github.com/fritzlabs/swift-framework.git', :tag => s.version.to_s }
  s.requires_arc = true

  s.ios.deployment_target = '10.0'
  s.swift_version = '4.2'
  s.frameworks = 'UIKit', 'CoreML', 'Foundation'

  s.default_subspec = 'ManagedModel'

  s.subspec 'ManagedModel' do |analytics|
    analytics.dependency 'Fritz/Core'
    analytics.vendored_framework = 'Frameworks/FritzManagedModel.framework'
    analytics.preserve_path = 'Frameworks/FritzManagedModel.framework/build-encrypted-model.sh'
  end

  s.subspec 'Core' do |core|
    core.preserve_paths = 'CoreOnly/Sources/module.modulemap'
    core.source_files = 'CoreOnly/Sources/Fritz.h'
    core.user_target_xcconfig = {
      "HEADER_SEARCH_PATHS": "$(inherited) ${PODS_ROOT}/Fritz/CoreOnly/Sources"
    }
    core.vendored_framework = 'Frameworks/FritzCore.framework'
  end

  s.subspec 'CoreMLHelpers' do |helpers|
    helpers.vendored_framework = 'Frameworks/CoreMLHelpers.framework'
  end

  s.subspec 'Vision' do |vision|
    vision.dependency 'Fritz/Core'
    vision.dependency 'Fritz/CoreMLHelpers'
    vision.vendored_framework = 'Frameworks/FritzVision.framework'
  end

  s.subspec 'VisionLabelModel' do |vision|
    vision.dependency 'Fritz/Core'
    vision.dependency 'Fritz/Vision'
    vision.dependency 'Fritz/ManagedModel'
    vision.vendored_framework = 'Frameworks/FritzVisionLabelModel.framework'
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.dependency 'Fritz/Core'
    vision.dependency 'Fritz/Vision'
    vision.dependency 'Fritz/ManagedModel'
    vision.vendored_framework = 'Frameworks/FritzVisionObjectModel.framework'
  end

  s.subspec 'VisionStyleModelBase' do |vision|
    vision.dependency 'Fritz/Core'
    vision.dependency 'Fritz/Vision'
    vision.dependency 'Fritz/ManagedModel'
    vision.vendored_framework = 'Frameworks/FritzVisionStyleModelBase.framework'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.dependency 'Fritz/VisionStyleModelBase'
    style.vendored_framework = 'Frameworks/FritzVisionStyleModel.framework'

    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'Fritz/VisionStyleModelBase'
      paintings.vendored_framework = 'Frameworks/FritzVisionStyleModelPaintings.framework'
    end
  end
  s.subspec 'VisionSegmentationModelBase' do |vision|
    vision.dependency 'Fritz/Core'
    vision.dependency 'Fritz/Vision'
    vision.dependency 'Fritz/ManagedModel'
    vision.dependency 'Fritz/CoreMLHelpers'
    vision.vendored_framework = 'Frameworks/FritzVisionSegmentationModel.framework'
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |people|
      people.dependency 'Fritz/ManagedModel'
      people.dependency 'Fritz/VisionSegmentationModelBase'
      people.vendored_framework = 'Frameworks/FritzVisionPeopleSegmentationModel.framework'
    end

    vision.subspec 'LivingRoom' do |livingroom|
      livingroom.dependency 'Fritz/ManagedModel'
      livingroom.dependency 'Fritz/VisionSegmentationModelBase'
      livingroom.vendored_framework = 'Frameworks/FritzVisionLivingRoomSegmentationModel.framework'
    end

    vision.subspec 'Outdoor' do |outdoor|
      outdoor.dependency 'Fritz/ManagedModel'
      outdoor.dependency 'Fritz/VisionSegmentationModelBase'
      outdoor.vendored_framework = 'Frameworks/FritzVisionOutdoorSegmentationModel.framework'
    end
  end


end
