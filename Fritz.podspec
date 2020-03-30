Pod::Spec.new do |s|
  s.name = 'Fritz'

  s.version = '5.3.0'

  s.summary = 'Official Fritz SDK for Swift 5.1 and Objective-C'

  s.homepage = 'https://www.fritz.ai'

  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }

  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }

  s.source = { :http => 'https://fritz-swift-sdk-release-production.s3.amazonaws.com/FritzBase/5.3.0/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.1'

  s.default_subspec = 'Vision'

  s.subspec 'Vision' do |vision|
    vision.dependency 'FritzBase/Vision', '5.3.0'
    end

  s.subspec 'VisionLabelModel' do |vision|
    vision.subspec 'Fast' do |sub|
      sub.dependency 'FritzVisionLabelModelFast', '~> 5.3.0'
    end
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.subspec 'Fast' do |sub|
      sub.dependency 'FritzVisionObjectModelFast', '~> 5.3.0'
    end
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.subspec 'Human' do |pose|
      pose.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelAccurate', '~> 5.3.0'
      end
      pose.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelFast', '~> 5.3.0'
      end
      pose.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelSmall', '~> 5.3.0'
      end
    end
  end

  s.subspec 'VisionRigidPose' do |vision|
    vision.dependency 'FritzVisionRigidPose', '~> 5.3.0'
  end

  s.subspec 'VisionMultiPoseModel' do |vision|
    vision.dependency 'FritzVisionMultiPoseModel', '~> 5.3.0'
  end

  s.subspec 'VisionDepthModel' do |vision|
    vision.dependency 'FritzVisionDepthModel', '~> 5.3.0'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'FritzVisionStyleModelPaintings', '~> 5.3.0'
    end
    style.subspec 'Patterns' do |patterns|
      patterns.dependency 'FritzVisionStyleModelPatterns', '~> 5.3.0'
    end
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelAccurate', '~> 5.3.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelFast', '~> 5.3.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelSmall', '~> 5.3.0'
      end
    end

    vision.subspec 'People' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelAccurate', '~> 5.3.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelFast', '~> 5.3.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelSmall', '~> 5.3.0'
      end
    end

    vision.subspec 'LivingRoom' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelAccurate', '~> 5.3.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelFast', '~> 5.3.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelSmall', '~> 5.3.0'
      end
    end

    vision.subspec 'Outdoor' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelAccurate', '~> 5.3.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelFast', '~> 5.3.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelSmall', '~> 5.3.0'
      end
    end

    vision.subspec 'Hair' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelAccurate', '~> 5.3.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelFast', '~> 5.3.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelSmall', '~> 5.3.0'
      end
    end

    vision.subspec 'Sky' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelAccurate', '~> 5.3.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelFast', '~> 5.3.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelSmall', '~> 5.3.0'
      end
    end

    vision.subspec 'Pet' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelAccurate', '~> 5.3.0'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelFast', '~> 5.3.0'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelSmall', '~> 5.3.0'
      end
    end

    vision.subspec 'PeopleAndPet' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleAndPetSegmentationModelAccurate', '~> 5.3.0'
      end
    end
  end
end
