//
//  ViewController.h
//  testAV
//
//  Created by Ram on 14/04/15.
//  Copyright (c) 2015 AppVirality. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIButton *updateUserDetails,*btnInitWithEmail,*btnLogOut;
@property (nonatomic, weak) IBOutlet UIButton *showGrowthHack;
@property (nonatomic, weak) IBOutlet UIButton *transaction,*signUp,*miniNotification,*userRewards,*getReferrerReward,*getUserCoupons;


-(IBAction)showGrowthHack:(id)sender;
-(IBAction)transaction:(id)sender;
-(IBAction)userDetails:(id)sender;
-(IBAction)signup:(id)sender;
-(IBAction)showLaunchBar:(id)sender;
-(IBAction)getUserRewards:(id)sender;
-(IBAction)getReferrerReward:(id)sender;
-(IBAction)getUserCoupons:(id)sender;
-(IBAction)initWithEmail:(id)sender;
-(IBAction)logOut:(id)sender;


@end

