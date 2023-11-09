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
    const int STOP_NUM = 0;

    int cur_int;
    int even_int_count, even_int_tot, even_int_avg;
    int odd_int_count, odd_int_tot, odd_int_avg;

    even_int_count = even_int_tot = even_int_avg = 0;
    odd_int_count = odd_int_tot = odd_int_avg = 0;

    printf("Enter integers (0 to stop):\n");

    while (scanf("%d", &cur_int) == 1)
    {
        if (cur_int == STOP_NUM)
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
    printf("Average of even integers: %d\n", even_int_count ? even_int_tot / even_int_count : 0);

    printf("Number of odd integers: %d\n", odd_int_count);
    printf("Average of odd integers: %d\n", odd_int_count ? odd_int_tot / odd_int_count : 0);

    printf("\n=====> DONE <=====\n");

    return 0;
}