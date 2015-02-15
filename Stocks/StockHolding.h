//
//  StockHolding.h
//  Stocks
//
//  Created by Oscar on 1/14/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface StockHolding : NSObject
{
    // 3 instance variables
    float purchaseSharePrice;
    float currentSharePrice;
    int numberOfShares;
}

// set the instance variables with these methods

@property float currentSharePrice;
@property int numberOfShares;

// methods
- (float)costInDollars; //purhcase share price * number of shares
- (float)valueInDollars; //current share price * number of shares

@end
