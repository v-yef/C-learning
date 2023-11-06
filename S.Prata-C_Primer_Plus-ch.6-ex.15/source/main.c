/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.15
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that reads in a line of input and then prints
               the line in reverse order. You can store the input in an array
               of char; assume that the line is no longer than 255 characters.
               Recall that you can use scanf() with the %c specifier to read
               a character at a time from input and that the newline character
               (\n) is generated when you press the Enter key.
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    const int MAX_LEN = 255;

    char line[MAX_LEN];
    int index = 0;

    printf("Enter the text line (255 characters max): ");

    do
    {
        scanf("%c", &line[index]);

    } while (line[index++] != '\n');

    for (index = strlen(line); index >= 0; index--)
    {
        printf("%c", line[index]);
    }

    printf("\n\n=====> DONE <=====\n");

    return 0;
}