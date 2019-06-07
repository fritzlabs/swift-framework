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

#if __has_include(<FritzVisionLabelModel/FritzVisionLabelModel.h>)
@import FritzVisionLabelModel;
#endif


#if __has_include(<FritzVisionObjectModel/FritzVisionObjectModel.h>)
@import FritzVisionObjectModel;
#endif

#if __has_include(<FritzVisionStyleModelPaintings/FritzVisionStyleModelPaintings.h>)
@import FritzVisionStyleModelPaintings;
#endif

#if __has_include(<FritzVisionPeopleSegmentationModel/FritzVisionPeopleSegmentationModel.h>)
@import FritzVisionPeopleSegmentationModel;
#endif

#if __has_include(<FritzVisionPeopleSegmentationMediumModel/FritzVisionPeopleSegmentationMediumModel.h>)
@import FritzVisionPeopleSegmentationMediumModel;
#endif

#if __has_include(<FritzVisionLivingRoomSegmentationModel/FritzVisionLivingRoomSegmentationModel.h>)
@import FritzVisionLivingRoomSegmentationModel;
#endif

#if __has_include(<FritzVisionOutdoorSegmentationModel/FritzVisionOutdoorSegmentationModel.h>)
@import FritzVisionOutdoorSegmentationModel;
#endif

#if __has_include(<FritzVisionPeopleAndPetSegmentationMediumModel/FritzVisionPeopleAndPetSegmentationMediumModel.h>)
@import FritzVisionPeopleAndPetSegmentationMediumModel;
#endif

#if __has_include(<FritzVisionHairSegmentationModel/FritzVisionHairSegmentationModel.h>)
@import FritzVisionHairSegmentationModel;
#endif

#if __has_include(<FritzVisionSkySegmentationModel/FritzVisionSkySegmentationModel.h>)
@import FritzVisionSkySegmentationModel;
#endif


#if __has_include(<FritzVisionPoseModel/FritzVisionPoseModel.h>)
@import FritzVisionPoseModel;
#endif

#if __has_include(<FritzVisionMultiPoseModel/FritzVisionMultiPoseModel.h>)
@import FritzVisionMultiPoseModel;
#endif

#if __has_include(<FritzVisionPetSegmentationModel/FritzVisionPetSegmentationModel.h>)
@import FritzVisionPetSegmentationModel;
#endif

#if __has_include(<FritzVisionRigidPose/FritzVisionRigidPose.h>)
@import FritzVisionRigidPose;
#endif

#endif  // defined(__has_include)
