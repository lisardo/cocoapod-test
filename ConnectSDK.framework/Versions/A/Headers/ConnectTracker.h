//
//  ConnectTracker.h
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Constants.h"
#import "ConnectDeviceInfo.h"
#import "ConnectWebViewUserAgent.h"
#import "SCNetworkReachability.h"
#import "CI_Notification.h"
#import "CI_ConnectTrackerCore.h"



@interface ConnectTracker : NSObject

// Deprecated in 1.3.4. Now use init!
+(void)initWithAppKey:(NSString *)key andDelegate:(NSObject *)delegate __deprecated;

+(void)useDelayedInit;

+(void)testInit;
+(void)init:(NSString *)appKey andDelegate:(NSObject *)delegate;

+ (void)init:(NSDictionary *)launchOptions withAppKey:(NSString *)appKey andDelegate:(NSObject *)delegate withPushNotifications:(BOOL) useNotifications;
+ (void)init:(NSDictionary *)launchOptions withAppKey:(NSString *)appKey andDelegate:(NSObject *)delegate withClosure:(NotifcationBlock)closure;

+(BOOL)trackEvents:(NSArray *)events;
+(BOOL)trackEvents:(NSString *)event withValue:(NSString *)value;
+(BOOL)trackEvent:(NSString *)event withValue:(NSString *)value;

+(void)resumeInit;
// Push notification methods
+(void)registerForNotification:(NSData *)devToken;
+(void)handleNotification:(NSDictionary *)userInfo;

// New attribution methods
+(void)openURL:(NSURL *)url;

@end
