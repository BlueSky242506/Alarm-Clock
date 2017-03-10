//
//  CheckMarkCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/12/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CheckMarkCell : UITableViewCell

@property (nonatomic, strong) IBOutlet UILabel *titleLabel;

+ (CheckMarkCell *)checkMarkCell:(UITableView *)tableview;

- (void)setDisable:(BOOL)disable;

@end
