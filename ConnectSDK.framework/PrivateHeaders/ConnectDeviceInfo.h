//
//  ConnectDeviceInfo
//
//

@interface ConnectDeviceInfo : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *device;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic, copy) NSString *country;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *timezone;
@property (nonatomic, copy) NSString *udid;
@property (nonatomic, copy) NSString *idfa;
@property (nonatomic, copy) NSString *mac;
@property (nonatomic, copy) NSString *resolution;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *connectTrackerSDKVersion;
@property (nonatomic, copy) NSString *tracking_id;
- (NSDictionary *)dictionaryWithProperties;
- (NSString *)convertToUnderscores: (NSString *)input;
- (void)initSystem;
- (BOOL)isInitialized;

@end
