//
//  DescriptionTableHeaderView.h
//  AlarmClock
//
//  Created by Zhenxin on 12/15/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DescriptionTableHeaderView : UIView

@property (nonatomic, strong) IBOutlet UILabel *headerDescriptionLabel;

- (CGFloat)getSectionHeight;

@end