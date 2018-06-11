#import <FritzCore/FritzCore.h>



#if !defined(__has_include)
  #error "FritzSDK.h won't import anything if your compiler doesn't support __has_include. Please \
          import the headers individually."
#else
  #if __has_include(<FritzVision/FritzVision.h>)
    #import <FritzVision/FritzVision.h>
  #endif

  #if __has_include(<FritzVisionModel/FritzVisionModel.h>)
    #import <FritzVisionModel/FritzVisionModel.h>
  #endif

#endif  // defined(__has_include)
