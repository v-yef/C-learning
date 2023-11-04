/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.6
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : The mass of a single molecule of water is about 3.0×10-23 grams.
               A quart of water is about 950 grams. Write a program that
               requests an amount of water, in quarts, and displays the number
               of water molecules in that amount.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    float water_quarts;
    float water_molecule_grams = 3.0e-23;
    int water_quart_grams = 950;

    printf("Enter amount of water in quarts: ");
    scanf("%f", &water_quarts);

    printf("Number of molecules in this amount: %e\n",
           water_quarts * water_quart_grams / water_molecule_grams);

    printf("\n=====> DONE <=====\n");

    return 0;
}