//
//  main.c
//  Triangle
//
//  Created by Oscar on 1/5/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float remainingAngle(float angleA, float angleB);
float angleC;

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

float remainingAngle(float angleA, float angleB)
{
    angleC = 180 - angleA - angleB;
    return angleC;
}

