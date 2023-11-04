/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.5-ex.2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks for an integer and then prints all
               the integers from (and including) that value up to (and
               including) a value larger by 10. (That is, if the input is 5,
               the output runs from 5 to 15.) Be sure to separate each output
               value by a space or tab or newline.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int number, max_number;

    printf("Enter int number: ");
    scanf("%d", &number);

    max_number = number + 10;

    while (number <= max_number)
    {
        printf("%d\n", number);
        number++;
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}