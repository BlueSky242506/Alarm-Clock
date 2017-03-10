//
//  MailSender.h
//  FlashCard
//
//  Created by System Administrator on 5/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MessageUI.h>

@interface MailSender : NSObject <MFMailComposeViewControllerDelegate> {

@private    
    UIViewController *topViewController;
    
}

+ (MailSender *)currentMailSender;
- (void)showMailViewWithSubject:(NSString *)subject body:(NSString *)body receiver:(NSArray *)receiver parentViewController:(UIViewController *)parent;


@end
