/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.10
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests lower and upper integer limits,
               calculates the sum of all the integer squares from the square
               of the lower limit to the square of the upper limit, and displays
               the answer. The program should then continue to prompt for limits
               and display answers until the user enters an upper limit that is
               equal to or less than the lower limit. A sample run should look
               something like this:
                Enter lower and upper integer limits: 5 9
                The sums of the squares from 25 to 81 is 255
                Enter next set of limits: 3 25
                The sums of the squares from 9 to 625 is 5520
                Enter next set of limits: 5 5
                Done
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int lower_limit, lower_limit_temp, upper_limit, sum_of_squares;

    printf("Enter lower and upper integer limits: ");
    scanf("%d%d", &lower_limit, &upper_limit);

    lower_limit_temp = lower_limit;

    while (lower_limit_temp <= upper_limit)
    {
        for (sum_of_squares = 0; lower_limit_temp <= upper_limit; lower_limit_temp++)
        {
            sum_of_squares += lower_limit_temp * lower_limit_temp;
        }

        printf("The sums of the squares from %d to %d is %d\n",
               lower_limit * lower_limit, upper_limit * upper_limit, sum_of_squares);

        printf("Enter next set of limits: ");
        scanf("%d%d", &lower_limit, &upper_limit);
    }

    printf("Done\n\n");

    return 0;
}