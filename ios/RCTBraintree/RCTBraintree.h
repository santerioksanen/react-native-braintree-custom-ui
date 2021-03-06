//
//  RCTBraintree.h
//  RCTBraintree
//
//  Created by Thibaut Gensollen on 18/09/19.
//  From Rickard Ekman code
//  Copyright © 2019 Thibaut Gensollen. All rights reserved.
//

#import <React/RCTBridgeModule.h>
#import <React/RCTUtils.h>
#import <React/RCTConvert.h>

#import "BraintreePaymentFlow.h"
#import "BraintreeCore.h"
#import "BraintreePayPal.h"
#import "BraintreeCard.h"
#import "BTDataCollector.h"
#import "PPDataCollector.h"

@interface RCTBraintree : UIViewController <RCTBridgeModule, BTViewControllerPresentingDelegate>
@property (nonatomic, strong, readwrite) BTPaymentFlowDriver *paymentFlowDriver;
@property (nonatomic, strong) BTAPIClient *braintreeClient;
@property (nonatomic, strong) UIViewController *reactRoot;
@property (nonatomic, strong) BTDataCollector *dataCollector;

@property (nonatomic, strong) RCTResponseSenderBlock callback;

+ (instancetype)sharedInstance;
- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *) options;
- (void) run3DSecureCheck: (NSDictionary *)parameters callback: (RCTResponseSenderBlock)callback;
@end
