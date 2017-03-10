//
//  SettingSectionHeaderView.h
//  AlarmClock
//
//  Created by Zhenxin on 12/9/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SettingSectionHeaderViewDelegate;

@interface SettingSectionHeaderView : UIView {
    
    id<SettingSectionHeaderViewDelegate> _delegate;
}

@property (nonatomic, assign) id<SettingSectionHeaderViewDelegate> delegate;

@property (nonatomic, strong) IBOutlet UILabel *headerTitleLabel;

@property (nonatomic, strong) IBOutlet UILabel *headerDescriptionLabel;

@property (nonatomic, strong) IBOutlet UISwitch *headerSwitch;

- (id)initWithDefault;

- (CGFloat)getSectionHeight;
    
@end



@protocol SettingSectionHeaderViewDelegate <NSObject>

@optional

- (void)settingSectionHeaderView:(SettingSectionHeaderView *)section didFinsihSwitch:(UISwitch *)headerSwitch;

@end
