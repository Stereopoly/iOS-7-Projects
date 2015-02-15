//
//  Employee.h
//  BMITime
//
//  Created by Oscar on 1/15/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import "Person.h"
@class Asset;

@interface Employee : Person
{
    int employeeID;
    NSMutableArray *assets;
    
}
@property int employeeID;
- (void)addAssetsObject:(Asset *)a;
- (unsigned int)valueOfAssets;

@end
