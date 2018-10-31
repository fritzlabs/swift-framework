#import <FritzCore/FritzCore.h>



#if !defined(__has_include)
  #error "Fritz.h won't import anything if your compiler doesn't support __has_include. Please \
          import the headers individually."
#else
  #if __has_include(<FritzVision/FritzVision.h>)
    #import <FritzVision/FritzVision.h>
  #endif

  #if __has_include(<CoreMLHelpers/CoreMLHelpers.h>)
    #import <CoreMLHelpers/CoreMLHelpers.h>
  #endif

  #if __has_include(<FritzVisionLabelModel/FritzVisionLabelModel.h>)
    #import <FritzVisionLabelModel/FritzVisionLabelModel.h>
  #endif

  #if __has_include(<FritzManagedModel/FritzManagedModel.h>)
    #import <FritzManagedModel/FritzManagedModel.h>
  #endif

  #if __has_include(<FritzVisionObjectModel/FritzVisionObjectModel.h>)
    #import <FritzVisionObjectModel/FritzVisionObjectModel.h>
  #endif

  #if __has_include(<FritzVisionStyleModelBase/FritzVisionStyleModelBase.h>)
    #import <FritzVisionStyleModelBase/FritzVisionStyleModelBase.h>
  #endif

  #if __has_include(<FritzVisionStyleModel/FritzVisionStyleModel.h>)
    #import <FritzVisionStyleModel/FritzVisionStyleModel.h>
  #endif

  #if __has_include(<FritzVisionStyleModelPaintings/FritzVisionStyleModelPaintings.h>)
    #import <FritzVisionStyleModelPaintings/FritzVisionStyleModelPaintings.h>
  #endif

  #if __has_include(<FritzVisionSegmentationModel/FritzVisionSegmentationModel.h>)
    #import <FritzVisionSegmentationModel/FritzVisionSegmentationModel.h>
  #endif

  #if __has_include(<FritzVisionPeopleSegmentationModel/FritzVisionPeopleSegmentationModel.h>)
    #import <FritzVisionPeopleSegmentationModel/FritzVisionPeopleSegmentationModel.h>
  #endif

  #if __has_include(<FritzVisionLivingRoomSegmentationModel/FritzVisionLivingRoomSegmentationModel.h>)
    #import <FritzVisionLivingRoomSegmentationModel/FritzVisionLivingRoomSegmentationModel.h>
  #endif

  #if __has_include(<FritzVisionOutdoorSegmentationModel/FritzVisionOutdoorSegmentationModel.h>)
    #import <FritzVisionOutdoorSegmentationModel/FritzVisionOutdoorSegmentationModel.h>
  #endif

#endif  // defined(__has_include)
