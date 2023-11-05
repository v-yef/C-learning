/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.12
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Consider these two infinite series:
                1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...
                1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...
               Write a program that evaluates running totals of these two
               series up to some limit of number of terms. Hint: –1 times
               itself an odd number of times is –1, and –1 times itself an
               even number of times is 1. Have the user enter the limit
               interactively; let a zero or negative value terminate input.
               Look at the running totals after 100 terms, 1000 terms, 10,000
               terms. Does either series appear to be converging to some value?
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    float sum_1, sum_2, limit, denominator;

    sum_1 = sum_2 = 1.0;

    printf("Enter the limit of series (0<= to quit): ");
    scanf("%f", &limit);

    while (limit > 0)
    {
        for (denominator = 2.0; denominator <= limit; denominator++)
        {
            sum_1 += 1.0 / limit;
        }

        for (denominator = 2.0; denominator <= limit; denominator++)
        {
            sum_2 -= 1.0 / limit + 1.0 / (limit + 1.0);
        }

        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...+1.0/%.1f=  %f\n", limit, sum_1);
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...+1.0/%.1f=  %f\n", limit, sum_2);

        sum_1 = sum_2 = 1.0;

        printf("Enter the next limit of series (0<= to quit): ");
        scanf("%f", &limit);
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}