/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : There are approximately 3.156 × 10e7 seconds in a year. Write
               a program that requests your age in years and then displays
               the equivalent number of seconds.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int age;
    float seconds_in_year = 3.156e7;

    printf("Enter your age in years: ");
    scanf("%d", &age);

    printf("Your age in seconds: %e.\n", age * seconds_in_year);

    printf("\n=====> DONE <=====\n");

    return 0;
}