/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.7
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that reads a single word into a character array
               and then prints the word backward. Hint: Use strlen() (Chapter 4)
               to compute the index of the last character in the array.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[20];
    int char_index;

    printf("Enter a word to reverse: ");
    scanf("%s", word);

    printf("The reversed word is: ");

    for (char_index = strlen(word); char_index >= 0; char_index--)
    {
        printf("%c", word[char_index]);
    }

    printf("\n\n");

    return 0;
}