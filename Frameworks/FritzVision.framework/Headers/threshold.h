//
//  threshold.h
//  FritzVisionSegmentationPredictor
//
//  Created by Christopher Kelly on 11/15/18.
//  Copyright © 2018 Fritz Labs Incorporated. All rights reserved.
//

#ifndef threshold_h
#define threshold_h

#include <stdio.h>

void arrayThreshold(float * restrict matrix, float * restrict values, float thresh, size_t n);

void fuzzyArrayThreshold(float * restrict matrix, float * restrict values, float thresh, float minAllowed, size_t n);

void argmax(float * restrict matrix, int * restrict output, float min_threshold, size_t stride, size_t n);

void classesToColor(int * restrict classMatrix, uint8_t * restrict colors, uint8_t * restrict output, size_t n);

#endif /* threshold_h */
