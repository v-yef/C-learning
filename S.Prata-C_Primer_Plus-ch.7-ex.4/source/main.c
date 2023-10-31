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
    const char stop_char = '#';

    char cur_ch;
    int substitution_count = 0;

    while ((cur_ch = getchar()) != stop_char)
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

    printf("Number of substitutions: %d\n\n", substitution_count);

    return 0;
}