//
//  Person.h
//  BMITime
//
//  Created by Oscar on 1/12/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//
// The class person inherits  all the instance variables and methods defined by the class NSObject

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    //it has  two instance variables
    float heightInMeters;
    int weightInKilos;
    
}

//you will be able to set those instance variables using these methods
@property float heightInMeters;
@property int weightInKilos;

//this method calculates the body mass index
- (float)bodyMassIndex;

@end
