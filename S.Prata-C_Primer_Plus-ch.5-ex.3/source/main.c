/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.5-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter the number of days
               and then converts that value to weeks and days. For example, it
               would convert 18 days to 2 weeks, 4 days. Display results in the
               following format:
                18 days are 2 weeks, 4 days.
               Use a while loop to allow the user to repeatedly enter day
               values; terminate the loop when the user enters a nonpositive
               value, such as 0 or -20.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int days_to_week = 7;
    int input_days, days, weeks;

    printf("Enter number of days (0<= to exit)\n");
    scanf("%d", &input_days);

    while (input_days > 0)
    {
        weeks = input_days / days_to_week;
        days = input_days % days_to_week;

        printf("%d days are %d weeks, %d days\n\n", input_days, weeks, days);

        printf("Enter number of days (0<= to exit)\n");
        scanf("%d", &input_days);
    }

    printf("\n");

    return 0;
}