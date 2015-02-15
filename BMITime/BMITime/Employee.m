//
//  Employee.m
//  BMITime
//
//  Created by Oscar on 1/15/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import "Employee.h"
#import "Asset.h"

@implementation Employee

@synthesize employeeID;

- (void)addAssetsObject:(Asset *)a
{
    //Is assets nil?
    if(!assets) {
        
        //create the array
        assets  = [[NSMutableArray alloc]init];
    }
    [assets addObject:a];
}

- (unsigned int) valueOfAssets
{
    //sum up resale value of assets
    unsigned int sum = 0;
    for(Asset *a in assets) {
        sum += [a resaleValue];
    }
    return sum;
}

-(float)bodyMassIndex
{
    float normalBMI = [super bodyMassIndex];
    return normalBMI * 0.9;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<Employee %d: $%d in assets>", [self employeeID], [self valueOfAssets]];
}

- (void)dealloc
{
    NSLog(@"deallocating %@", self);
}

@end
