/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.8
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : In the U.S. system of volume measurements, a pint is 2 cups,
               a cup is 8 ounces, an ounce is 2 tablespoons, and a tablespoon
               is 3 teaspoons. Write a program that requests a volume in cups
               and that displays the equivalent volumes in pints, ounces,
               tablespoons, and teaspoons. Why does a floating-point type make
               more sense for this application than an integer type?
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    float cups, pints, ounces, tablespoons, teaspoons;

    printf("Enter volume in cups:\n");
    scanf("%f", &cups);

    pints = 2 * cups;
    ounces = cups / 8;
    tablespoons = ounces / 2;
    teaspoons = tablespoons / 3;
    // float is better because it saves fractional part after division
    // and volumes can be real numbers as well

    printf("Volume in pints: %.3f\n", pints);
    printf("Volume in ounces: %.3f\n", ounces);
    printf("Volume in tablespoons: %.3f\n", tablespoons);
    printf("Volume in teaspoons: %.3f\n\n", teaspoons);

    return 0;
}