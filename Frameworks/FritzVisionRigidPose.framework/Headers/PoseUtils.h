//
//  PoseUtils.h
//  CarPoseDemo
//
//  Created by cc on 3/26/19.
//  Copyright © 2019 Laan Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreML/CoreML.h>
#import <SceneKit/SceneKit.h>



// Keypoint indices shuffled during training. TODO
const int UNITY_TO_NN_LAYER[] = {0, 1, 5, 2, 6, 3, 7, 4, 11, 8, 12, 9, 13, 10,};


@interface PoseResult : NSObject

@property (nonatomic) SCNMatrix4 scenekitCameraTransform;
@property (nonatomic) SCNVector4 rotationVector;
@property (nonatomic) SCNVector3 translationVector;
@end



@interface PoseUtils : NSObject

+ (PoseResult*) estimate3DPoseFromPose:(double*)pose2d
                          numKeypoints:(int)numPoints
                           modelPoints:(double*)modelPoints3d
                           focalLength:(double)focal_length
                               centerX:(double)center_x
                               centerY:(double)center_y;

@end


