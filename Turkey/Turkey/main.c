//
//  main.c
//  Turkey
//
//  Created by Oscar on 1/4/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //declare variable 'weight' of type float
    float weight;
    
    //put a number in that variable
    weight = 14.2;
    
    //log it to the user
    printf("The turkey weighs %f.\n", weight);
    
    //declare another variable of type float
    float cookingTime;
    
    //calculate cooking time and store it in the variable
    cookingTime = 15.0 + 15.0 * weight;
    
    //log that to user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    return 0;
}

