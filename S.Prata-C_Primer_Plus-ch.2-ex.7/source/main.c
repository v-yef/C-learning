/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.2-ex.7
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Many studies suggest that smiling has benefits. Write a program
               that produces the following output:
                Smile!Smile!Smile!
                Smile!Smile!
                Smile!

               Have the program define a function that displays the string Smile!
               once, and have the program use the function as often as needed.
 ============================================================================
 */

#include <stdio.h>

void smile(void);

int main(void)
{
    smile();
    smile();
    smile();
    printf("\n");

    smile();
    smile();
    printf("\n");

    smile();
    printf("\n\n");

    return 0;
}

void smile(void)
{
    printf("Smile!");
    return;
}
