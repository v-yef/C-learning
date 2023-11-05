/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that creates an array with 26 elements and
               stores the 26 lowercase letters in it. Also have it show the
               array contents.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const size_t ARRAY_SIZE = 26;

    char letters[ARRAY_SIZE];
    char letter;
    size_t i;

    for (i = 0, letter = 'a'; letter <= 'z'; i++, letter++)
    {
        letters[i] = letter;
    }

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%c ", letters[i]);
    }

    printf("\n");

    printf("\n=====> DONE <=====\n");

    return 0;
}