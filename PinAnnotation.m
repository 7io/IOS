//
//  PinAnnotation.m
//  Sonar
//
//  Created by Incarnate Software Solutions  on 10/09/13.
//  Copyright (c) 2013 Incarnate Software Solutions . All rights reserved.
//

#import "PinAnnotation.h"

@implementation PinAnnotation
-(id) initWithCoordinate:(CLLocationCoordinate2D)coordinate title:(NSString *)title {
    if ((self = [super init])) {
        self.coordinate =coordinate;
        self.title = title;
    }
    return self;
}

@end
