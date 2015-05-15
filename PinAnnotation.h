//
//  PinAnnotation.h
//  Sonar
//
//  Created by Incarnate Software Solutions  on 10/09/13.
//  Copyright (c) 2013 Incarnate Software Solutions . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
@interface PinAnnotation : NSObject<MKAnnotation>
@property (strong, nonatomic) NSString *title;
@property (nonatomic,assign) CLLocationCoordinate2D coordinate;

-(id) initWithCoordinate:(CLLocationCoordinate2D)coordinate title:(NSString *)title;


@end
