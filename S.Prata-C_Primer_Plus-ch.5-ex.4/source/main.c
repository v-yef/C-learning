/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.5-ex.4
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter a height in
               centimeters and then displays the height in centimeters and in
               feet and inches. Fractional centimeters and inches should be
               allowed, and the program should allow the user to continue
               entering heights until a nonpositive value is entered. A sample
               run should look like this:
                Enter a height in centimeters: 182
                182.0 cm = 5 feet, 11.7 inches
                Enter a height in centimeters (<=0 to quit): 168.7
                168.0 cm = 5 feet, 6.4 inches
                Enter a height in centimeters (<=0 to quit): 0
                bye
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const float CENTIMETERS_TO_FEET = 30.48;
    const float INCH_TO_FEET = 12.0;

    int height_ft;
    float height_cm, height_inch_remind;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height_cm);

    while (height_cm > 0)
    {
        height_ft = height_cm / CENTIMETERS_TO_FEET;

        // (float - int)feet to get the reminder and then convert it to inches
        height_inch_remind = (height_cm / CENTIMETERS_TO_FEET - height_ft) * INCH_TO_FEET;

        printf("%.1f cm = %d feet, %.1f inches\n", height_cm, height_ft, height_inch_remind);

        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &height_cm);
    }

    printf("bye\n");

    printf("\n=====> DONE <=====\n");

    return 0;
}