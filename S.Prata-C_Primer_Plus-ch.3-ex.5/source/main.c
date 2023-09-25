/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : There are approximately 3.156 × 107 seconds in a year. Write
               a program that requests your age in years and then displays
               the equivalent number of seconds.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age in years:\n");
    scanf("%d", &age);

    printf("So you are %e seconds old.\n\n", age * 3.156e7);

    return 0;
}