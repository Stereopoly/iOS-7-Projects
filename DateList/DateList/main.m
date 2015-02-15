//
//  main.m
//  DateList
//
//  Created by Oscar on 1/11/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //create 3 NSDate objects
        NSDate *now = [NSDate date];
        NSDate *tomorrow = [now dateByAddingTimeInterval:24.0 * 60.0 * 60.0];
        NSDate *yesterday = [now dateByAddingTimeInterval:-24.0 * 60.0 * 60.0];
        
        //create an array containing all three (nil terminates the list)
        NSMutableArray *dateList = [NSMutableArray array];
        
        //add dates for array
        
        [dateList addObject:now];
        [dateList addObject:tomorrow];
        
        //put yesterday at beginning of the list
        [dateList insertObject:yesterday atIndex:0];
        
        for(NSDate *d in dateList) {
            NSLog(@"Here is a date: %@", d);
        }
        
        //remove yesterday
        [dateList removeObjectAtIndex:0];
        NSLog(@"Now the first date is %@", [dateList objectAtIndex:0]); 
        
       /* //how many dates are there
        NSLog(@"There are %lu dates", [dateList count]);
        
        //print a couple
        NSLog(@"The first date is %@", [dateList objectAtIndex:0]);
        NSLog(@"The third date is %@", [dateList objectAtIndex:2])
        ; */
        
    }
    return 0;
}

