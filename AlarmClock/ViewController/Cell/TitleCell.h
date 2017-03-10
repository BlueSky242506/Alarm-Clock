//
//  TitleCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/8/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TitleCell : UITableViewCell {
    
}

@property (nonatomic, strong) IBOutlet UIImageView *imageView;

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

@property (nonatomic, strong) IBOutlet UILabel *valueLabel;

+ (TitleCell *)titleCell:(UITableView *)tableview;

@end
