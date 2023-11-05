/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.2
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Use nested loops to produce the following pattern:
                $
                $$
                $$$
                $$$$
                $$$$$
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int ROWS = 5;

    int row, col;

    for (row = 0; row < ROWS; row++)
    {
        for (col = 0; col <= row; col++)
        {
            printf("$");
        }

        printf("\n");
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}