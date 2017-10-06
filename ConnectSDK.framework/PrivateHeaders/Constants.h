//
//  Constants.h
//  ConnectSDK
//
//  Created by Jeff Day on 5/4/16.
//  Copyright © 2016 Connected Interactive. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

#define CONNECTTRACKER_SDK_VERSION @"142"
#define CONNECTTRACKER_URL_SCHEME @"https" //needs to be https
#define CONNECTTRACKER_HOSTNAME @"ads.connectedinteractive.com" //
#define CONNECTTRACKER_BASE_URL CONNECTTRACKER_URL_SCHEME @"://" CONNECTTRACKER_HOSTNAME
#define CONNECTTRACKER_REACHABILITY_URL CONNECTTRACKER_URL_SCHEME @"://" @"ads.connectedinteractive.com"
#define CONNECTTRACKER_EVENT_URL CONNECTTRACKER_BASE_URL @"/api/ios" CONNECTTRACKER_SDK_VERSION @"/"
#define CONNECTTRACKER_IMPRESSION_TRACKER_URL CONNECTTRACKER_BASE_URL @"/api/impression_l/"
#define CONNECTTRACKER_CUSTOM_URI_SCHEME @"connectsdk"
#define CONNECTTRACKER_ENABLE_LOGGING TRUE
#define CONNECTTRACKER_LOGGING_FILENAME @"ConnectedEventLog"
#define CONNECTTRACKER_IMPRESSIONIDUSERDEFAULT @"CONNECTIMPRESSIONID"

#endif /* Constants_h */
