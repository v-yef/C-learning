/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.11
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that reads eight integers into an array and
               then prints them in reverse order.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int const ARR_LENGTH = 8;

    int array[ARR_LENGTH], index;

    printf("Enter the array of 8 integers: ");

    for (index = 0; index < ARR_LENGTH; index++)
    {
        scanf("%d", &array[index]);
    }

    printf("The reversed array of 8 integers: ");

    for (index = ARR_LENGTH - 1; index >= 0; index--)
    {
        printf("%d ", array[index]);
    }

    printf("\n");

    printf("\n=====> DONE <=====\n");

    return 0;
}