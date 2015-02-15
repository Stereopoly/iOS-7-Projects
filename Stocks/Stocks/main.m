//
//  main.m
//  Stocks
//
//  Created by Oscar on 1/14/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StockHolding.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        // create an empty array
        NSMutableArray *stocks = [[NSMutableArray alloc]initWithCapacity:0];
        
        float purchaseSharePrice = 5.0;
        float currentSharePrice = 6.0;
        
        // add objects
        [stocks addObject:[NSNumber numberWithFloat:1.0]];
        [stocks addObject:[NSNumber numberWithFloat:2.0]];
        [stocks addObject:[NSNumber numberWithFloat:3.0]];
        
        //print
        NSLog(@"Purchase Price: %f", purchaseSharePrice);
        NSLog(@"Current price: %f", currentSharePrice);
        
        for(NSNumber *d in stocks) {
            NSLog(@"Originals: %@", d);
        }
        
        //call currentSharePrice method
        float current = [stocks currentSharePrice];
    }
    return 0;
}

