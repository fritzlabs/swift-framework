Pod::Spec.new do |s|
  s.name = 'Fritz'

  s.version = '4.2.5'

  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'

  s.homepage = 'https://www.fritz.ai'

  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }

  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }

  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/4.2.5/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.1'

  s.default_subspec = 'Vision'

  s.subspec 'Vision' do |vision|
    vision.dependency 'FritzBase/Vision', '4.2.5'
    end

  s.subspec 'VisionLabelModel' do |vision|
    vision.subspec 'Fast' do |sub|
      sub.dependency 'FritzVisionLabelModelFast', '~> 4.2.0'
    end
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.subspec 'Fast' do |sub|
      sub.dependency 'FritzVisionObjectModelFast', '~> 4.2.0'
    end
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.subspec 'Human' do |pose|
      pose.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelAccurate', '~> 4.2.0'
      end
      pose.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelFast', '~> 4.2.0'
      end
      pose.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelSmall', '~> 4.2.0'
      end
    end
  end

  s.subspec 'VisionRigidPose' do |vision|
    vision.dependency 'FritzVisionRigidPose', '~> 4.2.0'
  end

  s.subspec 'VisionMultiPoseModel' do |vision|
    vision.dependency 'FritzVisionMultiPoseModel', '~> 4.2.0'
  end

  s.subspec 'VisionDepthModel' do |vision|
    vision.dependency 'FritzVisionDepthModel', '~> 4.2.0'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'FritzVisionStyleModelPaintings', '~> 4.2.0'
    end
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelAccurate', '~> 4.2.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelFast', '~> 4.2.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelSmall', '~> 4.2.0'
      end
    end

    vision.subspec 'People' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelAccurate', '~> 4.2.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelFast', '~> 4.2.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelSmall', '~> 4.2.0'
      end
    end

    vision.subspec 'LivingRoom' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelAccurate', '~> 4.2.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelFast', '~> 4.2.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelSmall', '~> 4.2.0'
      end
    end

    vision.subspec 'Outdoor' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelAccurate', '~> 4.2.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelFast', '~> 4.2.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelSmall', '~> 4.2.0'
      end
    end

    vision.subspec 'Hair' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelAccurate', '~> 4.2.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelFast', '~> 4.2.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelSmall', '~> 4.2.0'
      end
    end

    vision.subspec 'Sky' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelAccurate', '~> 4.2.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelFast', '~> 4.2.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelSmall', '~> 4.2.0'
      end
    end

    vision.subspec 'Pet' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelAccurate', '~> 4.2.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelFast', '~> 4.2.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelSmall', '~> 4.2.0'
      end
    end

    vision.subspec 'PeopleAndPet' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleAndPetSegmentationModelAccurate', '~> 4.2.0'
      end
    end
  end
end
