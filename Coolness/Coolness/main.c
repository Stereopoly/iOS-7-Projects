//
//  main.c
//  Coolness
//
//  Created by Oscar on 1/5/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 0;
  /*  while (i < 12) {
        printf("Oscar is cool.\n");
        i++;
    }   */
    for (i = 0; i < 12; i++) {
        printf("Checking i = %d\n", i);
        if(i + 90 == i * i) {
            break;
        }
    }
    
    printf("The answer is %d.\n", i);
    return 0;
}

