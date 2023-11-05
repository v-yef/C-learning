/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.6
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that prints a table with each line giving an
               integer, its square, and its cube. Ask the user to input the
               lower and upper limits for the table. Use a for loop.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int lower_limit, upper_limit, current_num;

    printf("Enter lower limit (integer) for the table: ");
    scanf("%d", &lower_limit);

    printf("Enter upper limit (integer) for the table: ");
    scanf("%d", &upper_limit);

    printf("%7s %10s %8s\n", "Number", "Square", "Cube");

    for (current_num = lower_limit; current_num <= upper_limit; current_num++)
    {
        printf("%5d %10d %10d\n",
               current_num, current_num * current_num, current_num * current_num * current_num);
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}