//
//  main.c
//  ClassCertificates
//
//  Created by Oscar on 1/5/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void congradulateStudent(char *student, char *course, int numDays);

int main(int argc, const char * argv[])
{

    congradulateStudent("Mark", "Cocoa", 5);
    sleep(2);
    congradulateStudent("Bo", "Objective-C", 2);
    sleep(2);
    congradulateStudent("Mike", "Python", 5);
    sleep(2);
    congradulateStudent("Ted", "iOS", 5);
    
    return 0;
}

void congradulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
}

