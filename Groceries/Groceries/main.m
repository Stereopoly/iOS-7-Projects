//
//  main.m
//  Groceries
//
//  Created by Oscar on 1/11/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //create array
        NSMutableArray *groceries = [NSMutableArray array];
        
        //objects
        NSString *item1 = @"Milk";
        NSString *item2 = @"Tomatoes";
        NSString *item3 = @"Cereal";
        
        //add objects to array
        [groceries addObject:item1];
        [groceries addObject:item2];
        [groceries addObject:item3];
        
        for(NSString *d in groceries) {
            NSLog(@"Here is an item: %@", d);
        }
        
        NSLog(@"Removing first object");
        [groceries removeObjectAtIndex:0];
        
        for(NSString *d in groceries) {
            NSLog(@"Here is an item: %@", d);
        }
        
        
    }
    return 0;
}

