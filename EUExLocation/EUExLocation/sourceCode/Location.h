//
//  Location.h
//  WebKitCorePlam
//
//  Created by AppCan on 11-9-14.
//  Copyright 2011 AppCan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#define KUEX_IS_NSString(x) ([x isKindOfClass:[NSString class]] && x.length>0&&(![x isEqualToString:@"(null)"]))

@class EUExLocation;

@interface Location : NSObject <CLLocationManagerDelegate,MKReverseGeocoderDelegate,MKMapViewDelegate>


@property(nonatomic, weak) EUExLocation *euexObj;

@property(nonatomic, strong) CLLocationManager *gps;

@property(nonatomic, strong) NSString *locationStr;

-(id)initWithEuexObj:(EUExLocation *)euexObj_;

-(void)getAddressWithLot:(NSString *)inLongitude Lat:(NSString *)inLatitude;

-(void)openLocation:(NSMutableArray *)inArguments;

-(void)closeLocation;

@end

