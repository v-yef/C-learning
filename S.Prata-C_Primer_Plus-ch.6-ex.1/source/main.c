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
    const int array_size = 26;

    char letters[array_size];
    char letter;
    int i;

    for (i = 0, letter = 'a'; letter <= 'z'; i++, letter++)
    {
        letters[i] = letter;
    }

    for (i = 0; i < array_size; i++)
    {
        printf("%c ", letters[i]);
    }

    printf("\n\n");

    return 0;
}