//
//  ASPopupAdController.h
//  ManageSDK
//
//  Created by Manage on 3/20/13.
//  Copyright (c) 2013 Manage. All rights reserved.
//

#define AS_SDK_VERSION                 @"2.1.0"
#import <UIKit/UIKit.h>

@protocol ASPopupAdDelegate <NSObject>
-(void)popoverWillAppear;
-(void)popoverWillDisappear;
@optional
-(void)didCacheInterstitial;
-(void)didCloseInterstitial;
-(void)didClickInterstitial;
-(void)popoverDidFailToLoadWithError:(NSError*)error;
@end

typedef enum { AS_MALE, AS_FEMALE, AS_OTHER } Gender;

@interface ASPopupAdController : UIViewController
@property (nonatomic, strong) NSString *zoneId;
@property (nonatomic, weak) UIViewController *parentController;
@property (nonatomic, weak) id<ASPopupAdDelegate> delegate;
//test mode is to force to show AppSponsor AD
@property (nonatomic, assign) BOOL testMode;
@property (nonatomic, assign) BOOL interstitialView;
@property (nonatomic, strong) NSString *country;
@property (nonatomic, strong) NSString *region;
@property (nonatomic, strong) NSString *metro;
@property (nonatomic, strong) NSString *city;
@property (nonatomic, strong) NSString *zip;
@property (nonatomic, assign) Gender *gender;
@property (nonatomic, strong) NSString *yob;
@property (nonatomic, strong) NSString *u_country;
@property (nonatomic, strong) NSString *u_city;
@property (nonatomic, strong) NSString *u_zip;
@property (nonatomic, strong) NSString *keywords;
@property (nonatomic, strong) NSString *longitude;
@property (nonatomic, strong) NSString *latitude;

-(ASPopupAdController*)enableLocationSupport;
-(ASPopupAdController*)initWithZoneId:(NSString*)adId;

/*
 * Preloads the ad.
 */
-(void)load;

/*
 * Presents the ad onto the current top ViewController
 * When ad is done being presented (closed), the ad is destroyed.
 * Load will need to be called to recreate the destroyed ad.
 */
-(void)presentAd;

@end
