/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.8
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that asks the user to enter the number of miles
               traveled and the number of gallons of gasoline consumed. It
               should then calculate and display the miles-per-gallon value,
               showing one place to the right of the decimal. Next, using the
               fact that one gallon is about 3.785 liters and one mile is about
               1.609 kilometers, it should convert the mile- per-gallon value to
               a liters-per-100-km value, the usual European way of expressing
               fuel consumption, and display the result, showing one place to the
               right of the decimal. Note that the U. S. scheme measures the
               distance traveled per amount of fuel (higher is better), whereas
               the European scheme measures the amount of fuel per distance
               (lower is better). Use symbolic constants (using const or #define)
               for the two conversion factors.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const float liters_to_gallon = 3.785;
    const float kilometers_to_mile = 1.609;

    float miles, gallons, miles_per_gallon, liters_per_100_km;

    printf("Enter the number of miles traveled\n");
    scanf("%f", &miles);

    printf("Enter the number of gallons of gasoline consumed\n");
    scanf("%f", &gallons);

    miles_per_gallon = miles / gallons;
    printf("Miles per gallon: %.1f\n", miles_per_gallon);

    // km_per_liter = miles_per_gallon * kilometers_to_mile / liters_to_gallon
    // liter_per_km = 1 / km_per_liter
    // liters_per_100_km = liter_per_km * 100

    liters_per_100_km = 1 / (miles_per_gallon * kilometers_to_mile / liters_to_gallon) * 100;
    printf("Liters per 100 km: %.1f\n\n", liters_per_100_km);

    return 0;
}