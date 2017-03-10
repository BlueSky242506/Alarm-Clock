//
//  FlashlightHeaderView.h
//  AlarmClock
//
//  Created by Zhenxin on 12/21/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FlashlightHeaderViewDelegate;

@interface FlashlightHeaderView : UIView {
    id<FlashlightHeaderViewDelegate> _delegate;
}
@property (nonatomic) id<FlashlightHeaderViewDelegate> delegate;
@property (nonatomic, assign) BOOL buttonShouldActiveStatus;
@end

@protocol FlashlightHeaderViewDelegate <NSObject>
@optional
- (void)flashlightHeaderView:(FlashlightHeaderView *)view;
@end

