/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.2-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that converts your age in years to days and
               displays both values. At this point, don’t worry about
               fractional years and leap years.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int years, days;

    years = 34;
    days = years * 365;

    printf("My age in years: %d.\n", years);
    printf("My age in days:  %d.\n", days);

    printf("\n=====> DONE <=====\n");

    return 0;
}
