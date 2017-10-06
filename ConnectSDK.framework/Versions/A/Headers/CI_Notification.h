//
//  CI_Notification.h
//  ConnectSDK
//
//  Created by Tom Clark on 2017-02-27.
//  Copyright © 2017 Connected Interactive. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CI_Notification : NSObject

// Parsed Properties
@property (nonatomic, strong) NSString* deepLink;
@property (nonatomic, strong) NSString* alert;
@property (nonatomic, strong) NSString* clientID;
@property (nonatomic, strong) NSString* sound;
@property (nonatomic, strong) NSString* messageID;

//Raw Data
@property (nonatomic, strong) NSDictionary* rawDictionary;

-(id)init:(NSDictionary *)pushDictionary;

@end
