//
//  SafariViewController.h
//  ConnectSDK
//
//  Created by Jeff Day on 6/7/16.
//  Copyright © 2016 Connected Interactive. All rights reserved.
//

#ifndef SafariViewController_h
#define SafariViewController_h

#import <SafariServices/SafariServices.h>

#import <UIKit/UIKit.h>
#import "Constants.h"

@interface SafariViewController : UIViewController<SFSafariViewControllerDelegate>

-(void)lookupImpressionID:(UIViewController *)parentController withAppKey:(NSString *)appKey;
-(UIInterfaceOrientationMask)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;

@end

#endif /* SafariViewController_h */
