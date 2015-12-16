//
//  AppVirality.h
//  AppVirality
//
//  Created by Ram Papineni on 18/06/15.
//  Copyright (c) 2015 AppVirality. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    GrowthHackTypeWordOfMouth ,
    GrowthHackTypeCustomerRetention,
} GrowthHackType;

@interface AppVirality : NSObject
+ (void)init;
+ (void)initWithApiKey:(NSString *)apiKey OnCompletion:(void(^)(NSDictionary * referrerDetails,NSError *error))completion;
+(void)getReferrerDetails:(void(^)(NSDictionary * referrerDetails,NSError *error))completion;
+ (void)showGrowthHack:(GrowthHackType)growthHack  completion:(void (^)(NSDictionary* campaignDetails,NSError *error))completion;
+ (void)saveConversionEvent:(NSDictionary*)eventDetails  completion:(void (^)(NSDictionary* conversionResult,NSError *error))completion;
+ (void)recordSocialActionForGrowthHack:(GrowthHackType)growthHack WithParams:(NSDictionary*)actionParams  completion:(void (^)(BOOL success,NSError *error))completion;
+ (void)registerAsDebugDevice:(void (^)(BOOL success,NSError *error))completion;
+ (void)getUserBalance:(GrowthHackType)growthHack  completion:(void (^)(NSDictionary* userInfo,NSError *error))completion;
+ (void)setUserDetails:(NSDictionary*)userDetails Oncompletion:(void (^)(BOOL success,NSError *error))completion ;
+ (void)setCustomURL:(NSString*)customUrl  completion:(void (^)(BOOL success,NSError *error))completion;
+ (void)getTerms:(GrowthHackType)growthHack  completion:(void (^)(NSDictionary* terms,NSError *error))completion;
+ (void)setUserLocation:(NSDictionary*)userDetails  completion:(void (^)(BOOL success,NSError *error))completion;
+(BOOL)isDebug;
+ (void)recordImpressionsForGrowthHack:(GrowthHackType)growthHackIndex WithParams:(NSDictionary*)actionParams  completion:(void (^)(NSDictionary* response,NSError *error))completion;
+ (void)checkReferrerRewards:(void (^)(NSDictionary *rewards,NSError *error))completion;
+ (void)redeemRewards:(NSArray*)rewards  completion:(void (^)(BOOL success,NSError *error))completion;
+ (void)getUserRewards:(void (^)(NSDictionary *rewards,NSError *error))completion;
+ (void)getUserCoupons:(void (^)(NSDictionary *coupons,NSError *error))completion;
+(void)logout;
+(void)attributeUserBasedonCookie:(NSString *)apiKey OnCompletion:(void(^)(BOOL success,NSError *error))completion;
+(void)getReferrerDetailsDirect:(void(^)(NSDictionary * referrerDetails,NSError *error))completion;

@end



