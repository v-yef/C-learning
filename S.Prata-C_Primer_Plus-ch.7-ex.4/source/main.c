/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.7-ex.4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Using if else statements, write a program that reads input up
               to #, replaces each period with an exclamation mark, replaces
               each exclamation mark initially present with two exclamation
               marks, and reports at the end the number of substitutions it
               has made.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const char STOP_CHAR = '#';

    char cur_ch;
    int substitution_count = 0;

    printf("Enter text containing '!' and '.' signs and with # at the end:\n");

    while ((cur_ch = getchar()) != STOP_CHAR)
    {
        if (cur_ch == '.')
        {
            putchar('!');
            substitution_count++;
        }
        else if (cur_ch == '!')
        {
            putchar('!');
            putchar('!');

            substitution_count++;
        }
        else
        {
            putchar(cur_ch);
        }
    }

    printf("Number of substitutions: %d\n", substitution_count);

    printf("\n=====> DONE <=====\n");

    return 0;
}