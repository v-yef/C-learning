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
    int const arr_length = 8;

    int array[arr_length], index;

    printf("Enter the array of 8 integers: ");

    for (index = 0; index < arr_length; index++)
    {
        scanf("%d", &array[index]);
    }

    printf("The reversed array of 8 integers: ");

    for (index = arr_length - 1; index >= 0; index--)
    {
        printf("%d ", array[index]);
    }

    printf("\n\n");

    return 0;
}