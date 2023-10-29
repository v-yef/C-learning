/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.7-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that reads input until encountering the # character
               and then reports the number of spaces read, the number of newline
               characters read, and the number of all other characters read.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const char stop_char = '#';

    char cur_char;
    int space_char_count, newline_char_count, other_char_count;

    space_char_count = newline_char_count = other_char_count = 0;

    while ((cur_char = getchar()) != stop_char)
    {
        if (cur_char == ' ')
        {
            space_char_count++;
        }
        else if (cur_char == '\n')
        {
            newline_char_count++;
        }
        else
        {
            other_char_count++;
        }
    }

    printf("Spaces characters  : %d\n", space_char_count);
    printf("Newline characters : %d\n", newline_char_count);
    printf("Other characters   : %d\n\n", other_char_count);

    return 0;
}