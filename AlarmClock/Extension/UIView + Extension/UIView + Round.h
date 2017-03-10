//
//  UIView + Round.h
//  Capper
//
//  Created by Zhenxin on 9/29/12.
//  Copyright (c) 2012 Zhenxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIView(Round)

-(void)addSubviewToBack:(UIView*)view;

-(void)roundOffFrame;

+(void)drawRoundRectangleInRect:(CGRect)rect withRadius:(CGFloat)radius;

-(void)roundViewWithCorner:(UIRectCorner)rectCorner radius:(float)radius;

@end
