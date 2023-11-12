/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.8
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests two floating-point numbers and
               prints the value of their difference divided by their product.
               Have the program loop through pairs of input values until the
               user enters nonnumeric input.
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

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
               num_1, num_2, fabsf(num_1 - num_2) / fabsf(num_1 * num_2));

        printf("Enter next pair of floating-point numbers (q to quit): ");
        nums_read = scanf("%f%f", &num_1, &num_2);
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}