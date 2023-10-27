/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.14
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that creates two eight-element arrays of doubles
               and uses a loop to let the user enter values for the eight elements
               of the first array. Have the program set the elements of the second
               array to the cumulative totals of the elements of the first array.
               For example, the fourth element of the second array should equal the
               sum of the first four elements of the first array, and the fifth
               element of the second array should equal the sum of the first five
               elements of the first array. (It’s possible to do this with nested
               loops, but by using the fact that the fifth element of the second
               array equals the fourth element of the second array plus the fifth
               element of the first array, you can avoid nesting and just use a
               single loop for this task.) Finally, use loops to display the contents
               of the two arrays, with the first array displayed on one line and
               with each element of the second array displayed below the corresponding
               element of the first array.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int arr_len = 8;

    double arr_1[arr_len], arr_2[arr_len];
    int i;

    for (i = 0; i < arr_len; i++)
    {
        printf("Enter the %d value of array: ", i + 1);
        scanf("%lf", &arr_1[i]);
    }

    arr_2[0] = arr_1[0];

    for (i = 1; i < arr_len; i++)
    {
        arr_2[i] = arr_2[i - 1] + arr_1[i];
    }

    printf("The 1st array: ");

    for (i = 0; i < arr_len; i++)
    {
        printf("%10.3lf", arr_1[i]);
    }

    printf("\nThe 2nd array: ");

    for (i = 0; i < arr_len; i++)
    {
        printf("%10.3lf", arr_2[i]);
    }

    printf("\n\n");

    return 0;
}