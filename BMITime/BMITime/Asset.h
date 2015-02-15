//
//  Asset.h
//  BMITime
//
//  Created by Oscar on 1/16/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Asset : NSObject
{
    NSString *label;
    unsigned int resaleValue;
}

@property (strong) NSString *label;
@property unsigned int resaleValue;

@end
