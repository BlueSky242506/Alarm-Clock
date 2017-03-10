//
//  StepperCell.h
//  AlarmClock
//
//  Created by Zhenxin on 12/10/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol StepperCellDelegate;

@interface StepperCell : UITableViewCell {
    
    id<StepperCellDelegate> _delegate;
}

@property (nonatomic, assign) id<StepperCellDelegate> delegate;
@property (nonatomic, strong) IBOutlet UILabel *titleLabel;
@property (nonatomic, strong) IBOutlet UIStepper *stepper;

+ (StepperCell *)stepperCell:(UITableView *)tableview;
@end


@protocol StepperCellDelegate <NSObject>
@optional
- (void)stepperCell:(StepperCell *)cell didFinsihStepped:(UIStepper *)stepper;
@end