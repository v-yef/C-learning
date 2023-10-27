/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.17
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Chuckie Lucky won a million dollars (after taxes), which he
               places in an account that earns 8% a year. On the last day of
               each year, Chuckie withdraws $100,000. Write a program that
               finds out how many years it takes for Chuckie to empty his account.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const float annual_rate = 0.08;

    float balance, annual_withdraw;
    int years;

    balance = 1000000;
    annual_withdraw = 100000;
    years = 0;

    while (balance > 0)
    {
        balance = (balance + balance * annual_rate) - annual_withdraw;

        years++;
    }

    printf("Years to empty the account: %d\n\n", years);

    return 0;
}