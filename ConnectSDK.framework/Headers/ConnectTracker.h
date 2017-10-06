//
//  ConnectTracker.h
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SCNetworkReachability.h"
#import "CI_Notification.h"

@interface ConnectTracker : NSObject

+(void)useDelayedInit;

+(void)init:(NSString *)appKey andDelegate:(NSObject *)delegate;

+(void)init:(NSDictionary *)launchOptions withAppKey:(NSString *)appKey andDelegate:(NSObject *)delegate withPushNotifications:(BOOL)useNotifications;
+(void)init:(NSDictionary *)launchOptions withAppKey:(NSString *)appKey andDelegate:(NSObject *)delegate withClosure:(NotifcationBlock)closure;

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
