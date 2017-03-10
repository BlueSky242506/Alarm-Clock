//
//  LightManager.h
//  Flashlight
//
//  Created by System Administrator on 6/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface LightManager : NSObject {
    AVCaptureDevice  *captureDevice;
}
@property (nonatomic, retain) AVCaptureDevice *captureDevice;
- (void)switchTorchMode:(BOOL)on;
+(BOOL)isPossibleToLight;
@end
