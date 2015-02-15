//
//  main.c
//  FloatMemory
//
//  Created by Oscar on 1/6/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    float i = 23.54;
    float *floatTest = &i;
    printf("Float Memory: %zu\n", sizeof(floatTest));
    return 0;
}

