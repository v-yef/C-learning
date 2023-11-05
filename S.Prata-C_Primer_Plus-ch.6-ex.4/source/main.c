/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Use nested loops to produce the following pattern:
                A
                BC
                DEF
                GHIJ
                KLMNO
                PQRSTU
               If your system doesn’t encode letters in numeric order, see
               the suggestion in programming exercise 3.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int ROWS = 6;

    int row, col;
    char ch, cur_ch = 'A';

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col <= row; col++, cur_ch++)
        {
            printf("%c", cur_ch);
        }

        printf("\n");
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}