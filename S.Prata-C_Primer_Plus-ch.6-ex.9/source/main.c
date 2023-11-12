/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.9
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Modify exercise 8 so that it uses a function to return the value
               of the calculation.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

double diff_divided_by_prod(double arg_1, double arg_2);

int main(void)
{
    const int NUMS_TO_READ = 2;

    float num_1, num_2;
    int nums_read;

    printf("Enter a pair of floating-point numbers (q to quit): ");
    nums_read = scanf("%f%f", &num_1, &num_2);

    while (NUMS_TO_READ == nums_read)
    {
        printf("The difference between %.3f and %.3f divided by their product is: %.3f\n\n",
               num_1, num_2, diff_divided_by_prod(num_1, num_2));

        printf("Enter next pair of floating-point numbers (q to quit): ");
        nums_read = scanf("%f%f", &num_1, &num_2);
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}

double diff_divided_by_prod(double arg_1, double arg_2)
{
    return fabsf(arg_1 - arg_2) / fabsf(arg_1 * arg_2);
}