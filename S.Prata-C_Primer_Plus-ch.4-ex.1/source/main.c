/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks for your first name, your last name,
               and then prints the names in the format last, first.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    char first_name[15];
    char last_name[15];

    printf("Enter your first name\n");
    scanf("%s", first_name);

    printf("Enter your last  name\n");
    scanf("%s", last_name);

    printf("So you are %s %s\n\n", last_name, first_name);

    return 0;
}