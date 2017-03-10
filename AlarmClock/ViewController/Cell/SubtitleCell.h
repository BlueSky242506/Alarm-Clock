//
//  SubtitleCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/13/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SubtitleCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) IBOutlet UILabel *subtitleLabel;

+ (SubtitleCell *)subtitleCell:(UITableView *)tableview;

@end
