/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.7
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that sets a type double variable to 1.0/3.0
               and a type float variable to 1.0/3.0. Display each result three
               times — once showing four digits to the right of the decimal,
               once showing 12 digits to the right of the decimal, and once
               showing 16 digits to the right of the decimal. Also have the
               program include float.h and display the values of FLT_DIG and
               DBL_DIG. Are the displayed values of 1.0/3.0 consistent with
               these values?
 ============================================================================
 */

#include <stdio.h>
#include <float.h>

int main(void)
{
    double dbl_var = 1.0 / 3.0;
    float fl_var = 1.0 / 3.0;

    printf("double = %.4lf\n", dbl_var);
    printf("float  = %.4f\n\n", fl_var);

    printf("double = %.12lf\n", dbl_var);
    printf("float  = %.12f\n\n", fl_var);

    printf("double = %.16lf\n", dbl_var);
    printf("float  = %.16f\n\n", fl_var);

    printf("DBL_DIG = %d\n", DBL_DIG);
    printf("FLT_DIG = %d\n\n", FLT_DIG);

    printf("\n=====> DONE <=====\n");

    return 0;
}