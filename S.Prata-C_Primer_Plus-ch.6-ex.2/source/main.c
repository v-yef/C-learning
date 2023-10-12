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
    int rows = 5;
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("$");
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}