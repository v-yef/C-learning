/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests the download speed in megabits per
               second (Mbs) and the size of a file in megabytes (MB). The
               program should calculate the download time for the file. Note
               that in this context one byte is eight bits. Use type float, and
               use / for division. The program should report all three values
               (download speed, file size, and download time) showing two
               digits to the right of the decimal point, as in the following:
                At 18.12 megabits per second, a file of 2.20 megabytes
                downloads in 0.97 seconds.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int BITS_TO_BYTE = 8;

    float download_speed_mbits_s, file_size_mbytes, download_time_s;

    printf("Enter download speed in megabits per second (Mbs): ");
    scanf("%f", &download_speed_mbits_s);

    printf("Enter size of a file in megabytes(Mb): ");
    scanf("%f", &file_size_mbytes);

    download_time_s = (file_size_mbytes * BITS_TO_BYTE) / download_speed_mbits_s;

    printf("At %.2f megabits per second, a file of %.2f megabytes\n"
           "downloads in %.2f seconds.\n",
           download_speed_mbits_s, file_size_mbytes, download_time_s);

    printf("\n=====> DONE <=====\n");

    return 0;
}