/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks you to enter an ASCII code value,
               such as 66, and then prints the character having that ASCII
               code.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    short ascii_code;

    printf("Enter an ASCII code value: ");
    scanf("%hd", &ascii_code);

    printf("This is a \"%c\" character!\n", ascii_code);

    printf("\n=====> DONE <=====\n");

    return 0;
}