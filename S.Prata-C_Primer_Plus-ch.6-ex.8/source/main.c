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
    const int nums_to_read = 2;

    float first_num, second_num;
    int nums_read;

    printf("Enter a pair of floating-point numbers (q to quit): ");
    nums_read = scanf("%f%f", &first_num, &second_num);

    while (nums_to_read == nums_read)
    {
        printf("The difference between %.3f and %.3f divided by their product is: %.3f\n\n",
               first_num, second_num, fabsf(first_num - second_num) / fabsf(first_num * second_num));

        printf("Enter a pair of floating-point numbers (q to quit): ");
        nums_read = scanf("%f%f", &first_num, &second_num);
    }

    printf("\n");

    return 0;
}