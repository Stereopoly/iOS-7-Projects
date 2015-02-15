//
//  Asset.m
//  BMITime
//
//  Created by Oscar on 1/16/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import "Asset.h"

@implementation Asset

@synthesize label, resaleValue;

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@: $%d >", [self label], [self resaleValue]];
}
- (void)dealloc
{
    NSLog(@"deallocating %@", self);
}
            
@end
