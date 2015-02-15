//
//  main.c
//  BMICalc
//
//  Created by Oscar on 1/6/14.
//  Copyright (c) 2014 Oscar. All rights reserved.
//

#include <stdio.h>


//declaration of struct Person
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[])
{
    Person person;
    person.weightInKilos = 48;
    person.heightInMeters = 1.65;
    printf("person weighs %i kilograms\n", person.weightInKilos);
    printf("person is %.2f meters tall\n", person.heightInMeters);
    float bmi = bodyMassIndex(person);
    printf("person has a bmi of %.2f\n", bmi);
    
    return 0;
}



