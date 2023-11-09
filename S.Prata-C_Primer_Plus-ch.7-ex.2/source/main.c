/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.7-ex.2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that reads input until encountering #. Have the
               program print each input character and its ASCII decimal code.
               Print eight character-code pairs per line.
               Suggestion: Use a character count and the modulus operator (%)
               to print a newline character for every eight cycles of the loop.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const char STOP_CHAR = '#';

    char cur_char;
    int char_count = 0;

    printf("Enter text with # at the end:\n");

    while ((cur_char = getchar()) != STOP_CHAR)
    {
        char_count++;

        printf("%c %d\n", cur_char, cur_char);

        if (char_count % 8 == 0)
        {
            putchar('\n');
        }
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}