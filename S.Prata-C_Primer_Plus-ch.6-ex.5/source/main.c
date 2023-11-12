/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Have a program request the user to enter an uppercase letter.
               Use nested loops to produce a pyramid pattern like this:
                    A
                   ABA
                  ABCBA
                 ABCDCBA
                ABCDEDCBA

               The pattern should extend to the character entered. For example,
               the preceding pattern would result from an input value of E.
               Hint: Use an outer loop to handle the rows. Use three inner
               loops in a row, one to handle the spaces, one for printing
               letters in ascending order, and one for printing letters in
               descending order. If your system doesn’t use ASCII or a similar
               system that represents letters in strict number order, see the
               suggestion in programming exercise 3.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    char input_char, start_char, cur_char, print_char;
    int spaces;

    printf("Enter a character: ");
    scanf("%c", &input_char);

    for (cur_char = start_char = 'A'; cur_char <= input_char; cur_char++)
    {
        for (spaces = 0; spaces < (input_char - cur_char); spaces++)
        {
            printf(" ");
        }

        for (print_char = start_char; print_char < cur_char; print_char++)
        {
            printf("%c", print_char);
        }

        for (print_char = cur_char; print_char >= start_char; print_char--)
        {
            printf("%c", print_char);
        }

        printf("\n");
    }

    printf("\n=====> DONE <=====\n");

    return 0;
}