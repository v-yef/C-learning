/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.3
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that sounds an alert and then prints the
               following text:
                Startled by the sudden sound, Sally shouted,
                "By the Great Pumpkin, what was that!"
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n\
    \"By the Great Pumpkin, what was that!\"\n\n");

    return 0;
}