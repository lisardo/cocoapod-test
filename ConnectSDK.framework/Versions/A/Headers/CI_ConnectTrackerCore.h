//
//  CI_ConnectTrackerCore.h
//  ConnectSDK
//
//  Created by Tom Clark on 2017-02-27.
//  Copyright © 2017 Connected Interactive. All rights reserved.
//

#import "SCNetworkReachability.h"
#import "Constants.h"
#import "CommonMacros.h"
#import "CI_Notification.h"
#import <UIKit/UIKit.h>

#ifndef CI_ConnectTrackerCore_h
#define CI_ConnectTrackerCore_h

@interface CI_ConnectTrackerCore: NSObject

typedef void (^NotifcationBlock) (CI_Notification*);

-(void)useDelayedInit;
-(void)init:(NSString *)appKey andDelegate:(NSObject *)delegate;
-(void)testInit;
-(void)resumeInit;

-(BOOL)trackEvents:(NSArray *)events withParameters:(NSDictionary *)parameters;
-(BOOL)trackEvents:(NSString *)event withValue:(NSString *)value;

-(void)handleNotification:(NSDictionary *)userInfo;
-(void)registerForNotification:(NSData *)devToken;
-(void)createAppInstall;

@property (nonatomic) NotifcationBlock notificationBlock;

@end

#endif /* CI_ConnectTrackerCore_h */
