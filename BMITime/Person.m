//
//  Person.m
//  BMITime
//
//  Created by Oscar on 1/12/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize heightInMeters, weightInKilos;

- (float)bodyMassIndex
{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h * h);
}

@end
