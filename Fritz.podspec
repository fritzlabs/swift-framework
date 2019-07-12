Pod::Spec.new do |s|
  s.name = 'Fritz'

  s.version = '3.5.8'

  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'

  s.homepage = 'https://fritz.ai'

  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }

  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }

  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/3.5.8/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.0'

  s.default_subspec = 'Vision'

  s.subspec 'Vision' do |vision|
    vision.dependency 'FritzBase/Vision', '3.5.8'
  end

  s.subspec 'VisionLabelModel' do |vision|
    vision.dependency 'FritzVisionLabelModel', '3.5.8'
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.dependency 'FritzVisionObjectModel', '3.5.8'
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.dependency 'FritzVisionPoseModel', '3.5.8'
  end

  s.subspec 'VisionRigidPose' do |vision|
    vision.dependency 'FritzVisionRigidPose', '3.5.8'
  end

  s.subspec 'VisionMultiPoseModel' do |vision|
    vision.dependency 'FritzVisionMultiPoseModel', '3.5.8'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'FritzVisionStyleModelPaintings', '3.5.8'
    end
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |people|
      people.dependency 'FritzVisionPeopleSegmentationModel', '3.5.8'
    end

    vision.subspec 'PeopleMedium' do |people|
      people.dependency 'FritzVisionPeopleSegmentationMediumModel', '3.5.8'
    end

    vision.subspec 'LivingRoom' do |livingroom|
      livingroom.dependency 'FritzVisionLivingRoomSegmentationModel', '3.5.8'
    end

    vision.subspec 'Outdoor' do |outdoor|
      outdoor.dependency 'FritzVisionOutdoorSegmentationModel', '3.5.8'
    end

    vision.subspec 'Hair' do |hair|
      hair.dependency 'FritzVisionHairSegmentationModel', '3.5.8'
    end

    vision.subspec 'PeopleAndPetMedium' do |people|
      people.dependency 'FritzVisionPeopleAndPetSegmentationMediumModel', '3.5.8'
    end

    vision.subspec 'Pet' do |pet|
      pet.dependency 'FritzVisionPetSegmentationModel', '3.5.8'
    end

    vision.subspec 'Sky' do |sky|
      sky.dependency 'FritzVisionSkySegmentationModel', '3.5.8'
    end

  end
end
