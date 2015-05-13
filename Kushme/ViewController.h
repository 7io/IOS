//
//  ViewController.h
//  Kushme
//
//  Created by Test on 12/05/15.
//  Copyright (c) 2015 Ishant Tiwari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
@class MBProgressHUD;


@interface ViewController : UIViewController{
    
    NSMutableData *
    nsUrlResponseData;
    NSMutableArray * allData;
    MBProgressHUD *HUD;
    NSString *latitudeValue;
    NSString *longitudeValue;
}

@property (nonatomic, strong) CLLocationManager *locationManager;
@property(nonatomic,retain)IBOutlet UITextField *fldUsername;
@property(nonatomic,retain)IBOutlet UITextField *fldPassword;


@end

