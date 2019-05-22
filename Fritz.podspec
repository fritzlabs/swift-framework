Pod::Spec.new do |s|
  s.name = 'Fritz'

  s.version = '3.5.0-beta.2'

  s.summary = 'Official Fritz SDK for Swift 5.0 and Objective-C'

  s.homepage = 'https://fritz.ai'

  s.license = { :type => 'Apache 2.0', :file => 'LICENSE.md' }

  s.author = { 'Chris Kelly' => 'engineering@fritz.ai' }

  s.source = { :http => 'https://github.com/fritzlabs/swift-framework/releases/download/3.5.0-beta.2/FritzBase.zip' }

  s.requires_arc = true

  s.frameworks = 'Foundation', 'UIKit', 'AVFoundation', 'Accelerate', 'CoreImage', 'VideoToolbox'
  s.weak_frameworks = 'CoreML', 'Vision'

  s.ios.deployment_target = '10.0'

  s.swift_version = '5.0'

  s.default_subspec = 'Vision'

  s.subspec 'Vision' do |vision|
    vision.dependency 'FritzBase/Vision'
  end

  s.subspec 'VisionLabelModel' do |vision|
    vision.dependency 'FritzVisionLabelModel'
  end

  s.subspec 'VisionObjectModel' do |vision|
    vision.dependency 'FritzVisionObjectModel'
  end

  s.subspec 'VisionPoseModel' do |vision|
    vision.dependency 'FritzVisionPoseModel'
  end

  s.subspec 'VisionMultiPoseModel' do |vision|
    vision.dependency 'FritzVisionMultiPoseModel'
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

    vision.subspec 'PeopleMedium' do |people|
      people.dependency 'FritzVisionPeopleSegmentationMediumModel'
    end

    vision.subspec 'LivingRoom' do |livingroom|
      livingroom.dependency 'FritzVisionLivingRoomSegmentationModel'
    end

    vision.subspec 'Outdoor' do |outdoor|
      outdoor.dependency 'FritzVisionOutdoorSegmentationModel'
    end

    vision.subspec 'Hair' do |hair|
      hair.dependency 'FritzVisionHairSegmentationModel'
    end

    vision.subspec 'PeopleAndPetMedium' do |people|
      people.dependency 'FritzVisionPeopleAndPetSegmentationMediumModel'
    end

    vision.subspec 'Pet' do |pet|
      pet.dependency 'FritzVisionPetSegmentationModel'
    end

  end
end
