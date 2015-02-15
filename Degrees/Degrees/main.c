//
//  main.c
//  Degrees
//
//  Created by Oscar on 1/5/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float fahrenheitFromCelsius(float cel);
static float lastTemperature;   // static vs no static has no different because only one file (main.c)

int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degress fahrenheit\n", freezeInF);
    printf("The last temperature converted was %f\n", lastTemperature);
    
    return 0;
}

float fahrenheitFromCelsius(float cel)
{
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
   
    return fahr;
}

