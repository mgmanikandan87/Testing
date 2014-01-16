//
//  ViewController.m
//  AppSponsor
//
//  Created by Moolya Software on 12/01/14.
//  Copyright (c) 2014 Sponsor. All rights reserved.
//

#import "ViewController.h"
#import <AppSponsorSDK/ASPopupAdController.h>

#define AD_ZONE @"_zG_e-1Cq9aPfMbpS3gUaw"

@interface ViewController ()
@property(nonatomic, strong) ASPopupAdController * controller;
@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
}

-(IBAction)showads:(id)sender{
    _controller = [[ASPopupAdController alloc] initWithZoneId:AD_ZONE];
    [_controller presentAd];
    
}

-(IBAction)loadads:(id)sender{
    _controller = [[ASPopupAdController alloc] initWithZoneId:AD_ZONE];
    [_controller load];
    
}
@end
