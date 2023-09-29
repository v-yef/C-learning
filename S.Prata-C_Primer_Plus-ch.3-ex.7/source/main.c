/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.7
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : There are 2.54 centimeters to the inch. Write a program that
               asks you to enter your height in inches and then displays your
               height in centimeters. Or, if you prefer, ask for the height
               in centimeters and convert that to inches.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    float height_inches;
    float centimeters_to_inch = 2.54;

    printf("Enter your height in inches:\n");
    scanf("%f", &height_inches);

    printf("Your height in centimeters: %.2f\n\n", height_inches * centimeters_to_inch);

    return 0;
}