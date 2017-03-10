//
//  ASViewController.h
//  AlarmClock
//
//  Created by Zhenxin on 12/5/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

/*
// Use to choose proper xib file by apple device
// When iphone4, 4gs, xib name is ~iphone.
// When iphoen5, xib name is ~iphone5
// When ipad, xib name is ~ipad
*/

#import <UIKit/UIKit.h>

@interface ASViewController : UIViewController {
    
@protected
    
    BOOL _hiddenStatusBarWhenPushed;
}

@property (nonatomic, assign) BOOL hiddenStatusBarWhenPushed;

@end
