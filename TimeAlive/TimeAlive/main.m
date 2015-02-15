//
//  main.m
//  TimeAlive
//
//  Created by Oscar on 1/9/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        [comps setYear: 2000];
        [comps setMonth: 12];
        [comps setDay: 19];
        [comps setHour: 0];
        [comps setMinute: 0];
        [comps setSecond: 0];
        
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dateOfBirth = [g dateFromComponents:comps];
        
        NSLog(@"date of birth %@", dateOfBirth);
        
        NSDate *now = [NSDate date];
        NSLog(@"The date is %@", now);
        
        
        float time = [now timeIntervalSinceDate:dateOfBirth];
        
        NSLog(@"Seconds since birth: %f", time);
    }
    return 0;
}

