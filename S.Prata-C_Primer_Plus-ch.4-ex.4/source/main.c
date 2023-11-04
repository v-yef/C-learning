/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests your height in inches and your
               name, and then displays the information in the following form:
                Dabney, you are 6.208 feet tall
               Use type float, and use / for division. If you prefer, request
               the height in centimeters and display it in meters.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    float height_inches, height_feet;
    char name[15];

    printf("Enter your height in inches: ");
    scanf("%f", &height_inches);

    printf("Enter your name: ");
    scanf("%s", name);

    height_feet = height_inches / 12;

    printf("%s, you are %.3f feet tall\n", name, height_feet);

    printf("\n=====> DONE <=====\n");

    return 0;
}