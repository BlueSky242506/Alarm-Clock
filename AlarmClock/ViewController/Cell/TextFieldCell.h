//
//  TextFieldCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/8/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TextFieldCellDelegate;
@interface TextFieldCell : UITableViewCell <UITextFieldDelegate>

@property (nonatomic, assign) id<TextFieldCellDelegate> delegate;
@property (nonatomic, strong) IBOutlet UITextField *textField;

+ (TextFieldCell *)textFieldCell:(UITableView *)tableview;
@end

@protocol TextFieldCellDelegate <NSObject>
@optional
- (void)willBeEditing;
- (void)textFieldCell:(TextFieldCell *)cell didFinsihValueChanged:(UITextField *)textField;
@end