/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.3-ex.1
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Find out what your system does with integer overflow,
               floating-point overflow, and floating-point underflow by using
               the experimental approach; that is, write programs having these
               problems. (You can check the discussion in Chapter 4 of limits.h
               and float.h to get guidance on the largest and smallest values.)
 ============================================================================
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

void show_int_overflow(void);

void show_float_overflow_decimal(void);
void show_float_overflow_exponent(void);

void show_float_underflow_decimal(void);
void show_float_underflow_exponent(void);

int main(void)
{
    show_int_overflow();

    show_float_overflow_decimal();
    show_float_overflow_exponent();

    show_float_underflow_decimal();
    show_float_underflow_exponent();

    return 0;
}

void show_int_overflow(void)
{
    printf("Integer overflow:\n");
    printf("Max int value     = %d\n", INT_MAX);
    printf("Max int value + 1 = %d\n", INT_MAX + 1);
    printf("Max int value + 2 = %d\n\n", INT_MAX + 2);

    return;
}

void show_float_overflow_decimal(void)
{
    printf("Float overflow in decimal form:\n");
    printf("Max float value     = %f\n", FLT_MAX);
    printf("Max float value + 1 = %f\n", FLT_MAX + 1);
    printf("Max float value + 2 = %f\n\n", FLT_MAX + 2);

    return;
}

void show_float_overflow_exponent(void)
{
    printf("Float overflow in exponent form:\n");
    printf("Max float value     = %e\n", FLT_MAX);
    printf("Max float value + 1 = %e\n", FLT_MAX + 1);
    printf("Max float value + 2 = %e\n\n", FLT_MAX + 2);

    return;
}

void show_float_underflow_decimal(void)
{
    printf("Float underflow in decimal form:\n");
    printf("Min float value     = %f\n", FLT_MIN);
    printf("Min float value - 1 = %f\n", FLT_MIN - 1);
    printf("Min float value - 2 = %f\n\n", FLT_MIN - 2);

    return;
}

void show_float_underflow_exponent(void)
{
    printf("Float underflow in exponent form:\n");
    printf("Min float value     = %e\n", FLT_MIN);
    printf("Min float value - 1 = %e\n", FLT_MIN - 1);
    printf("Min float value - 2 = %e\n\n", FLT_MIN - 2);

    return;
}