//
//  main.m
//  BMITime
//
//  Created by Oscar on 1/12/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
#import "Employee.h"
#import "Asset.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // Create an array of Employee objects
        NSMutableArray *employees = [[NSMutableArray alloc] init];
        
        for(int i = 0;i < 10; i++) {
            //Create an instance of employee
            Employee *person = [[Employee alloc] init];
            
            //Give the instance variables interesting values
            [person setWeightInKilos:90+i];
            [person setHeightInMeters:1.8 - i/10.0];
            [person setEmployeeID:i];
            
            //Put the employee in employee array
            [employees addObject:person];
        }
        
        //Create 10 assets
        for(int i = 0; i < 10; i++) {
            
            //Create an asset
            Asset *asset = [[Asset alloc]init];
            
            //Give it an interesting label
            NSString *currentLabel = [NSString stringWithFormat:@"Laptop %d", i];
            [asset setLabel:currentLabel];
            [asset setResaleValue:i * 17];
            
            //Get a random number between 0 and 9 inclusive
            NSUInteger randomIndex = random() % [employees count];
            
            //Find that employee
            Employee *randomEmployee = [employees objectAtIndex:randomIndex];
            
            //Assign the asset to the employee
            [randomEmployee addAssetsObject:asset];
            
        }
        
        NSLog(@"Employees: %@", employees);
        NSLog(@"Giving up ownership of one employee");
        [employees removeObjectAtIndex:5];
        NSLog(@"Giving up ownership of array");
        employees = nil;
        
    }
    return 0;
}

