/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.6
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests the user’s first name and then the
               user’s last name. Have it print the entered names on one line
               and the number of letters in each name on the following line.
               Align each letter count with the end of the corresponding name,
               as in the following:
                Melissa Honeybee
                      7        8
               Next, have it print the same information, but with the counts
               aligned with the beginning of each name.
                Melissa Honeybee
                7       8
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    const size_t NAME_LENGTH_MAX = 15;

    char first_name[NAME_LENGTH_MAX];
    char last_name[NAME_LENGTH_MAX];

    size_t first_name_length, last_name_length;

    printf("Enter your first name: ");
    scanf("%s", first_name);
    first_name_length = strlen(first_name);

    printf("Enter your last name: ");
    scanf("%s", last_name);
    last_name_length = strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*zd %*zd\n", (int)first_name_length, first_name_length,
           (int)last_name_length, last_name_length);

    printf("%s %s\n", first_name, last_name);
    printf("%-*zd %-*zd\n", (int)first_name_length, first_name_length,
           (int)last_name_length, last_name_length);

    printf("\n=====> DONE <=====\n");

    return 0;
}