/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.5-ex.6
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Now modify the program of Programming Exercise 5 so that it
               computes the sum of the squares of the integers. (If you prefer,
               how much money you receive if you get $1 the first day, $4 the
               second day, $9 the third day, and so on. This looks like a much
               better deal!) C doesn’t have a squaring function, but you can
               use the fact that the square of n is n * n.
 ============================================================================
 */

/* Code of Programming Exercise 5*/
/*#include <stdio.h>

int main(void)
{
    int count, sum, max_count;

    count = 0;
    sum = 0;

    printf("Number to sum up to: ");
    scanf("%d", &max_count);

    while (count++ < max_count)
    {
        sum = sum + count;
    }

    printf("sum = %d\n\n", sum);

    return 0;
}*/

#include <stdio.h>

int main(void)
{
    int count, sum, max_count;

    count = 0;
    sum = 0;

    printf("Number to sum up to: ");
    scanf("%d", &max_count);

    while (count++ < max_count)
    {
        sum = sum + count * count;
    }

    printf("sum = %d\n\n", sum);

    return 0;
}