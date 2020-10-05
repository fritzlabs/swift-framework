Pod::Spec.new do |s|
  s.name = 'Fritz'

  s.version = '6.0.0-beta.3'

  s.summary = 'Official Fritz SDK for Swift 5.3 and Objective-C'

  s.homepage = 'https://www.fritz.ai'

  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }

  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }

  s.source = { :http => 'https://fritz-swift-sdk-release-production.s3.amazonaws.com/FritzBase/6.0.0-beta.3/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '12.0'

  s.swift_version = '5.3'

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.default_subspec = 'Vision'

  s.subspec 'Vision' do |vision|
    vision.dependency 'FritzBase/Vision', '6.0.0-beta.3'
    end

  s.subspec 'VisionLabelModel' do |vision|
    vision.subspec 'Fast' do |sub|
      sub.dependency 'FritzVisionLabelModelFast', '6.0.0-beta.3'
    end
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.subspec 'Fast' do |sub|
      sub.dependency 'FritzVisionObjectModelFast', '6.0.0-beta.3'
    end
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.subspec 'Human' do |pose|
      pose.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelAccurate', '6.0.0-beta.3'
      end
      pose.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelFast', '6.0.0-beta.3'
      end
      pose.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionHumanPoseModelSmall', '6.0.0-beta.3'
      end
    end
  end

  s.subspec 'VisionRigidPose' do |vision|
    vision.dependency 'FritzVisionRigidPose', '6.0.0-beta.3'
  end

  s.subspec 'VisionMultiPoseModel' do |vision|
    vision.dependency 'FritzVisionMultiPoseModel', '6.0.0-beta.3'
  end

  s.subspec 'VisionStyleModel' do |style|
    style.subspec 'Paintings' do |paintings|
      paintings.dependency 'FritzVisionStyleModelPaintings', '6.0.0-beta.3'
    end
    style.subspec 'Patterns' do |patterns|
      patterns.dependency 'FritzVisionStyleModelPatterns', '6.0.0-beta.3'
    end
  end

  s.subspec 'VisionSegmentationModel' do |vision|
    vision.subspec 'People' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelAccurate', '6.0.0-beta.3'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelFast', '6.0.0-beta.3'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelSmall', '6.0.0-beta.3'
      end
    end

    vision.subspec 'People' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelAccurate', '6.0.0-beta.3'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelFast', '6.0.0-beta.3'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPeopleSegmentationModelSmall', '6.0.0-beta.3'
      end
    end

    vision.subspec 'LivingRoom' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelAccurate', '6.0.0-beta.3'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelFast', '6.0.0-beta.3'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionLivingRoomSegmentationModelSmall', '6.0.0-beta.3'
      end
    end

    vision.subspec 'Outdoor' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelAccurate', '6.0.0-beta.3'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelFast', '6.0.0-beta.3'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionOutdoorSegmentationModelSmall', '6.0.0-beta.3'
      end
    end

    vision.subspec 'Hair' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelAccurate', '6.0.0-beta.3'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelFast', '6.0.0-beta.3'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionHairSegmentationModelSmall', '6.0.0-beta.3'
      end
    end

    vision.subspec 'Sky' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelAccurate', '6.0.0-beta.3'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelFast', '6.0.0-beta.3'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionSkySegmentationModelSmall', '6.0.0-beta.3'
      end
    end

    vision.subspec 'Pet' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelAccurate', '6.0.0-beta.3'
      end
      seg.subspec 'Fast' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelFast', '6.0.0-beta.3'
      end
      seg.subspec 'Small' do |sub|
        sub.dependency 'FritzVisionPetSegmentationModelSmall', '6.0.0-beta.3'
      end
    end

    vision.subspec 'PeopleAndPet' do |seg|
      seg.subspec 'Accurate' do |sub|
        sub.dependency 'FritzVisionPeopleAndPetSegmentationModelAccurate', '6.0.0-beta.3'
      end
    end
  end
end
