//
//  Fritz.h
//  Fritz
//
//  Created by Christopher Kelly on 10/5/18.
//  Copyright © 2018 Fritz Labs Incorporated. All rights reserved.
//
@import Foundation;
//! Project version number for Fritz.
FOUNDATION_EXPORT double FritzVersionNumber;

//! Project version string for Fritz.
FOUNDATION_EXPORT const unsigned char FritzVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Fritz/PublicHeader.h>

@import FritzCore;

#if !defined(__has_include)
#error "Fritz.h won't import anything if your compiler doesn't support __has_include. Please \
import the headers individually."
#else
#if __has_include(<FritzVision/FritzVision.h>)
@import FritzVision;
#endif

#if __has_include(<CoreMLHelpers/CoreMLHelpers.h>)
@import CoreMLHelpers;
#endif

#if __has_include(<FritzManagedModel/FritzManagedModel.h>)
@import FritzManagedModel;
#endif

#if __has_include(<FritzVisionLabelModelFast/FritzVisionLabelModelFast.h>)
@import FritzVisionLabelModelFast;
#endif


#if __has_include(<FritzVisionObjectModelFast/FritzVisionObjectModelFast.h>)
@import FritzVisionObjectModelFast;
#endif

#if __has_include(<FritzVisionStyleModelPaintings/FritzVisionStyleModelPaintings.h>)
@import FritzVisionStyleModelPaintings;
#endif


#if __has_include(<FritzVisionStyleModelPatterns/FritzVisionStyleModelPatterns.h>)
@import FritzVisionStyleModelPatterns;
#endif

#if __has_include(<FritzVisionPeopleSegmentationModelFast/FritzVisionPeopleSegmentationModelFast.h>)
@import FritzVisionPeopleSegmentationModelFast;
#endif


#if __has_include(<FritzVisionPeopleSegmentationModelSmall/FritzVisionPeopleSegmentationModelSmall.h>)
@import FritzVisionPeopleSegmentationModelSmall;
#endif

#if __has_include(<FritzVisionPeopleSegmentationModelAccurate/FritzVisionPeopleSegmentationModelAccurate.h>)
@import FritzVisionPeopleSegmentationModelAccurate;
#endif

#if __has_include(<FritzVisionLivingRoomSegmentationModelAccurate/FritzVisionLivingRoomSegmentationModelAccurate.h>)
@import FritzVisionLivingRoomSegmentationModelAccurate;
#endif

#if __has_include(<FritzVisionLivingRoomSegmentationModelFast/FritzVisionLivingRoomSegmentationModelFast.h>)
@import FritzVisionLivingRoomSegmentationModelFast;
#endif

#if __has_include(<FritzVisionLivingRoomSegmentationModelSmall/FritzVisionLivingRoomSegmentationModelSmall.h>)
@import FritzVisionLivingRoomSegmentationModelSmall;
#endif

#if __has_include(<FritzVisionOutdoorSegmentationModelFast/FritzVisionOutdoorSegmentationModelFast.h>)
@import FritzVisionOutdoorSegmentationModelFast;
#endif

#if __has_include(<FritzVisionOutdoorSegmentationModelSmall/FritzVisionOutdoorSegmentationModelSmall.h>)
@import FritzVisionOutdoorSegmentationModelSmall;
#endif

#if __has_include(<FritzVisionOutdoorSegmentationModelAccurate/FritzVisionOutdoorSegmentationModelAccurate.h>)
@import FritzVisionOutdoorSegmentationModelAccurate;
#endif


#if __has_include(<FritzVisionPeopleAndPetSegmentationModelFast/FritzVisionPeopleAndPetSegmentationModelFast.h>)
@import FritzVisionPeopleAndPetSegmentationModelFast;
#endif

#if __has_include(<FritzVisionPeopleAndPetSegmentationModelAccurate/FritzVisionPeopleAndPetSegmentationModelAccurate.h>)
@import FritzVisionPeopleAndPetSegmentationModelAccurate;
#endif

#if __has_include(<FritzVisionPeopleAndPetSegmentationModelSmall/FritzVisionPeopleAndPetSegmentationModelSmall.h>)
@import FritzVisionPeopleAndPetSegmentationModelSmall;
#endif

#if __has_include(<FritzVisionHairSegmentationModelFast/FritzVisionHairSegmentationModelFast.h>)
@import FritzVisionHairSegmentationModelFast;
#endif

#if __has_include(<FritzVisionHairSegmentationModelSmall/FritzVisionHairSegmentationModelSmall.h>)
@import FritzVisionHairSegmentationModelSmall;
#endif

#if __has_include(<FritzVisionHairSegmentationModelAccurate/FritzVisionHairSegmentationModelAccurate.h>)
@import FritzVisionHairSegmentationModelAccurate;
#endif

#if __has_include(<FritzVisionSkySegmentationModelAccurate/FritzVisionSkySegmentationModelAccurate.h>)
@import FritzVisionSkySegmentationModelAccurate;
#endif


#if __has_include(<FritzVisionSkySegmentationModelFast/FritzVisionSkySegmentationModelFast.h>)
@import FritzVisionSkySegmentationModelFast;
#endif

#if __has_include(<FritzVisionSkySegmentationModelSmall/FritzVisionSkySegmentationModelSmall.h>)
@import FritzVisionSkySegmentationModelSmall;
#endif

#if __has_include(<FritzVisionHumanPoseModelFast/FritzVisionHumanPoseModelFast.h>)
@import FritzVisionHumanPoseModelFast;
#endif
#if __has_include(<FritzVisionHumanPoseModelAccurate/FritzVisionHumanPoseModelAccurate.h>)
@import FritzVisionHumanPoseModelAccurate;
#endif

#if __has_include(<FritzVisionHumanPoseModelSmall/FritzVisionHumanPoseModelSmall.h>)
@import FritzVisionHumanPoseModelSmall;
#endif

#if __has_include(<FritzVisionMultiPoseModel/FritzVisionMultiPoseModel.h>)
@import FritzVisionMultiPoseModel;
#endif

#if __has_include(<FritzVisionPetSegmentationModelFast/FritzVisionPetSegmentationModelFast.h>)
@import FritzVisionPetSegmentationModelFast;
#endif

#if __has_include(<FritzVisionPetSegmentationModelSmall/FritzVisionPetSegmentationModelSmall.h>)
@import FritzVisionPetSegmentationModelSmall;
#endif

#if __has_include(<FritzVisionPetSegmentationModelAccurate/FritzVisionPetSegmentationModelAccurate.h>)
@import FritzVisionPetSegmentationModelAccurate;
#endif

#if __has_include(<FritzVisionRigidPose/FritzVisionRigidPose.h>)
@import FritzVisionRigidPose;
#endif

#endif  // defined(__has_include)
