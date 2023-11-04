/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.2-ex.6
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that creates an integer variable called toes.
               Have the program set toes to 10. Also have the program calculate
               what twice toes is and what toes squared is. The program should
               print all three values, identifying them.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int toes, twice_toes, squared_toes;

    toes = 10;
    twice_toes = 2 * toes;
    squared_toes = toes * toes;

    printf("Toes = %d\n", toes);
    printf("Twice toes = %d\n", twice_toes);
    printf("Squared toes = %d\n", squared_toes);

    printf("\n=====> DONE <=====\n");

    return 0;
}