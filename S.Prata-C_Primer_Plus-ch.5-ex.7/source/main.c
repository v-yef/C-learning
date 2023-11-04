/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.5-ex.7
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests a type double number and prints
               the value of the number cubed. Use a function of your own
               design to cube the value and print it. The main() program should
               pass the entered value to this function.
 ============================================================================
 */

#include <stdio.h>

void print_cubed(double num);

int main(void)
{
    double input;

    printf("Enter double number to be cubed: ");
    scanf("%lf", &input);

    printf("The result of cubing is: ");
    print_cubed(input);

    printf("\n");

    printf("\n=====> DONE <=====\n");

    return 0;
}

void print_cubed(double num)
{
    printf("%lf", num * num * num);

    return;
}