/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.18
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Professor Rabnud joined a social media group. Initially he had
               five friends. He noticed that his friend count grew in the
               following fashion. The first week one friend dropped out and the
               remaining number of friends doubled. The second week two friends
               dropped out and the remaining number of friends doubled. In
               general, in the Nth week, N friends dropped out and the
               remaining number doubled. Write a program that computes and
               displays the number of friends each week. The program should
               continue until the count exceeds Dunbar’s number. Dunbar’s
               number is a rough estimate of the maximum size of a cohesive
               social group in which each member knows every other member and
               how they relate to one another. Its approximate value is 150.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int DUNBAR_NUM = 150;

    int week = 1;
    int friends_count = 5;

    printf("%7s%10s\n", "Week", "Friends");

    for (; friends_count <= DUNBAR_NUM; week++)
    {
        friends_count = (friends_count - week) * 2;

        printf("%7d%10d\n", week, friends_count);
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}