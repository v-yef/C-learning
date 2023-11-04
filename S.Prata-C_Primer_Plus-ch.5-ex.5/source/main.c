/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.5-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Change the program addemup.c (Listing 5.13), which found the sum
               of the first 20 integers. (If you prefer, you can think of
               addemup.c as a program that calculates how much money you get in
               20 days if you receive $1 the first day, $2 the second day,
               $3 the third day, and so on.) Modify the program so that you can
               tell it interactively how far the calculation should proceed.
               That is, replace the 20 with a variable that is read in.
 ============================================================================
 */

/* Code of addemup.c*/
/*#include <stdio.h>

int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;

    while (count++ < 20)
        sum = sum + count;

    printf("sum = %d\n", sum);

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
        sum = sum + count;
    }

    printf("sum = %d\n", sum);

    printf("\n=====> DONE <=====\n");

    return 0;
}