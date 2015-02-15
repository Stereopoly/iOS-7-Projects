//
//  StockHolding.m
//  Stocks
//
//  Created by Oscar on 1/14/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#import "StockHolding.h"

@implementation StockHolding

@synthesize currentSharePrice, numberOfShares;

-(float)costInDollars
{
    float i = purchaseSharePrice * numberOfShares;
    return i;
}
-(float)valueInDollars
{
    float n = currentSharePrice * numberOfShares;
    return n;
}


@end
