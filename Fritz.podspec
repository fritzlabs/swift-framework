Pod::Spec.new do |s|
  s.name = 'Fritz'

  s.version = '3.2.4'

  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'

  s.homepage = 'https://fritz.ai'

  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }

  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }

  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/3.2.4/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.0'

  s.vendored_frameworks = 'Frameworks/FritzVision.framework'

  s.subspec 'VisionLabelModel' do |vision|
    vision.dependency 'FritzVisionLabelModel'
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.dependency 'FritzVisionObjectModel'
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.dependency 'FritzVisionPoseModel'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'FritzVisionStyleModelPaintings'
    end
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |people|
      people.dependency 'FritzVisionPeopleSegmentationModel'
    end

    vision.subspec 'LivingRoom' do |livingroom|
      livingroom.dependency 'FritzVisionLivingRoomSegmentationModel'
    end

    vision.subspec 'Outdoor' do |outdoor|
      outdoor.dependency 'FritzVisionOutdoorSegmentationModel'
    end
  end
end
