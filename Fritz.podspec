Pod::Spec.new do |s|
  s.name = 'Fritz'

  s.version = '4.1.0'

  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'

  s.homepage = 'https://fritz.ai'

  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }

  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }

  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.1.0/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.0'

  s.default_subspec = 'Vision'

  s.subspec 'Vision' do |vision|
    vision.dependency 'FritzBase/Vision', '4.1.0'
    end

  s.subspec 'VisionLabelModel' do |vision|
    vision.dependency 'FritzVisionLabelModel', '~> 4.1.0'
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.dependency 'FritzVisionObjectModel', '~> 4.1.0'
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.dependency 'FritzVisionPoseModel', '~> 4.1.0'
  end

  s.subspec 'VisionRigidPose' do |vision|
    vision.dependency 'FritzVisionRigidPose', '~> 4.1.0'
  end

  s.subspec 'VisionMultiPoseModel' do |vision|
    vision.dependency 'FritzVisionMultiPoseModel', '~> 4.1.0'
  end

  s.subspec 'VisionDepthModel' do |vision|
    vision.dependency 'FritzVisionDepthModel', '~> 4.1.0'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'FritzVisionStyleModelPaintings', '~> 4.1.0'
    end
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |people|
      people.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelAccurate', '~> 4.1.0'
      end

      people.subspec 'Fast' do |sub|
        people.dependency 'FritzVisionPeopleSegmentationModelFast', '~> 4.1.0'
      end

      people.subspec 'Small' do |sub|
        people.dependency 'FritzVisionPeopleSegmentationModelSmall', '~> 4.1.0'
      end
    end

    vision.subspec 'LivingRoom' do |livingroom|
      livingroom.dependency 'FritzVisionLivingRoomSegmentationModel', '~> 4.1.0'
    end

    vision.subspec 'Outdoor' do |outdoor|
      outdoor.dependency 'FritzVisionOutdoorSegmentationModel', '~> 4.1.0'
    end

    vision.subspec 'Hair' do |hair|
      hair.dependency 'FritzVisionHairSegmentationModel', '~> 4.1.0'
    end

    vision.subspec 'PeopleAndPetMedium' do |people|
      people.dependency 'FritzVisionPeopleAndPetSegmentationMediumModel', '~> 4.1.0'
    end

    vision.subspec 'Pet' do |pet|
      pet.dependency 'FritzVisionPetSegmentationModel', '~> 4.1.0'
    end

    vision.subspec 'Sky' do |sky|
      sky.dependency 'FritzVisionSkySegmentationModel', '~> 4.1.0'
    end

  end
end
