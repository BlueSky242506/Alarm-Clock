//
//  UIImage+Extra.h
//  Sticker
//
//  Created by Zhenxin on 11/21/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
* Convenience methods to help with resizing images retrieved from the
* ObjectiveFlickr library.
*/
@interface UIImage (Extra)

- (UIImage *)rescaleImageToSize:(CGSize)size;
- (UIImage *)cropImageToRect:(CGRect)cropRect;
- (CGSize)calculateNewSizeForCroppingBox:(CGSize)croppingBox;
- (UIImage *)cropCenterAndScaleImageToSize:(CGSize)cropSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageWithOverlayColor:(UIColor *)color;

@end
