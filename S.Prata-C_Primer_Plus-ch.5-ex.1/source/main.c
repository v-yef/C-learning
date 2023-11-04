/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.5-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that converts time in minutes to time in hours
               and minutes. Use #define or const to create a symbolic constant
               for 60. Use a while loop to allow the user to enter values
               repeatedly and terminate the loop if a value for the time of 0
               or less is entered.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int MINUTES_TO_HOUR = 60;

    int input_minutes, minutes, hours;

    printf("Enter number of minutes (0<= to exit): ");
    scanf("%d", &input_minutes);

    while (input_minutes > 0)
    {
        hours = input_minutes / MINUTES_TO_HOUR;
        minutes = input_minutes % MINUTES_TO_HOUR;

        printf("%d minutes equal to: %d hour(s) %d minute(s)\n\n", input_minutes, hours, minutes);

        printf("Enter number of minutes (0<= to exit): ");
        scanf("%d", &input_minutes);
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}