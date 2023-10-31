/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.7-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that reads integers until 0 is entered. After
               input terminates, the program should report the total number
               of even integers (excluding the 0) entered, the average value
               of the even integers, the total number of odd integers entered,
               and the average value of the odd integers.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int stop_num = 0;

    int cur_int, even_int_count, even_int_tot, even_int_avg, odd_int_count, odd_int_tot, odd_int_avg;

    even_int_count = even_int_tot = even_int_avg = 0;
    odd_int_count = odd_int_tot = odd_int_avg = 0;

    while (scanf("%d", &cur_int) == 1)
    {
        if (cur_int == stop_num)
        {
            break;
        }

        if (cur_int % 2 == 0)
        {
            even_int_count++;
            even_int_tot += cur_int;
        }
        else
        {
            odd_int_count++;
            odd_int_tot += cur_int;
        }
    }

    printf("Number of even integers: %d\n", even_int_count);
    printf("Average of even integers: %d\n", even_int_tot / even_int_count);

    printf("Number of odd integers: %d\n", odd_int_count);
    printf("Average of odd integers: %d\n", odd_int_tot / odd_int_count);

    printf("\n");

    return 0;
}