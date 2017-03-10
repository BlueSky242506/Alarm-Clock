//
//  MoreCell.h
//  AlarmClock
//
//  Created by Zhenxin on 1/3/13.
//  Copyright (c) 2013 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MoreCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UIImageView *imageView;

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) IBOutlet UILabel *detailLabel;

+ (MoreCell *)moreCell:(UITableView *)tableview;

@end
