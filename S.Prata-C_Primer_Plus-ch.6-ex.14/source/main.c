/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.6-ex.14
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that creates two eight-element arrays of doubles
               and uses a loop to let the user enter values for the eight
               elements of the first array. Have the program set the elements
               of the second array to the cumulative totals of the elements of
               the first array. For example, the fourth element of the second
               array should equal the sum of the first four elements of the
               first array, and the fifth element of the second array should
               equal the sum of the first five elements of the first array.
               (It’s possible to do this with nested loops, but by using the
               fact that the fifth element of the second array equals the
               fourth element of the second array plus the fifth element of the
               first array, you can avoid nesting and just use a single loop
               for this task.) Finally, use loops to display the contents of
               the two arrays, with the first array displayed on one line and
               with each element of the second array displayed below the
               corresponding element of the first array.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const size_t ARR_LEN = 8;

    double arr_1[ARR_LEN], arr_2[ARR_LEN];
    size_t index;

    for (index = 0; index < ARR_LEN; index++)
    {
        printf("Enter the %d value of array: ", (int)index + 1);
        scanf("%lf", &arr_1[index]);
    }

    arr_2[0] = arr_1[0];

    for (index = 1; index < ARR_LEN; index++)
    {
        arr_2[index] = arr_2[index - 1] + arr_1[index];
    }

    printf("The 1st array: ");

    for (index = 0; index < ARR_LEN; index++)
    {
        printf("%10.3lf", arr_1[index]);
    }

    printf("\nThe 2nd array: ");

    for (index = 0; index < ARR_LEN; index++)
    {
        printf("%10.3lf", arr_2[index]);
    }

    printf("\n\n=====> DONE <=====\n");

    return 0;
}