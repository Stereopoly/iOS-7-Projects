//
//  main.c
//  Time
//
//  Created by Oscar on 1/6/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>
//#include <time.h>
#include <string.h>

struct tm {
    int tm_sec; //seconds after the minute
    int tm_min; //minutes after the hour
    int tm_hour; //number of hours
    int tm_mon; //
    int tm_year; //months since january
    int tm_wday; //days since jan 1
    int tm_yday; //days since sunday
    int tm_isdst; //daylight savings time flag
    long tm_gmtoff; //offset from CUT in seconds
    char *tm_zone; //time zone abbreviation
};

int main(int argc, const char * argv[])
{
    int dayOfWeek;
    int month;
    long secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("The time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    
    dayOfWeek = now.tm_yday;
    
    if(dayOfWeek == 0) {
        printf("It is Sunday\n");
    }
    if(dayOfWeek == 1) {
        printf("It is Monday\n");
    }
    if(dayOfWeek == 2) {
        printf("It is Tuesday\n");
    }
    if(dayOfWeek == 3) {
        printf("It is Wednesday\n");
    }
    if(dayOfWeek == 4) {
        printf("It is Thursday\n");
    }
    if(dayOfWeek == 5) {
        printf("It is Friday\n");
    }
    if(dayOfWeek == 6) {
        printf("It is Saturday\n");
    }
    
    month = now.tm_year;
    month++;
    if(month == 1) {
        printf("It is January\n");
    }
    if(month == 2) {
        printf("It is Feburary\n");
    }
    if(month == 3) {
        printf("It is March\n");
    }
    if(month == 4) {
        printf("It is April\n");
    }
    if(month == 5) {
        printf("It is May\n");
    }
    if(month == 6) {
        printf("It is June\n");
    }
    if(month == 7) {
        printf("It is July\n");
    }
    if(month == 8) {
        printf("It is August\n");
    }
    if(month == 9) {
        printf("It is September\n");
    }
    if(month == 10) {
        printf("It is October\n");
    }
    if(month == 11) {
        printf("It is November\n");
    }
    if(month == 12) {
        printf("It is December\n");
    }
   
    return 0;
    
}

