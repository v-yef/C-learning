/*
 ============================================================================
 Name        : S.Prata-C_Primer_Plus-ch.4-ex.5
 Author      : Viacheslav Yefisko
 Version     : 0
 Copyright   : MIT License
 Description : Write a program that requests the download speed in megabits
               per second (Mbs) and the size of a file in megabytes (MB). The
               program should calculate the download time for the file. Note
               that in this context one byte is eight bits. Use type float,
               and use / for division. The program should report all three values
               (download speed, file size, and download time) showing two digits
               to the right of the decimal point, as in the following:
                At 18.12 megabits per second, a file of 2.20 megabytes
                downloads in 0.97 seconds.
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    const int bits_to_byte = 8;

    float download_speed_mbitss;
    float file_size_mbytes;
    float download_time_s;
    
    printf("Enter download speed in megabits per second (Mbs) and the size of a file in megabytes(Mb)\n");
    scanf("%f%f", &download_speed_mbitss, &file_size_mbytes);

    download_time_s = (file_size_mbytes * bits_to_byte) / download_speed_mbitss;

    printf("At %.2f megabits per second, a file of %.2f megabytes\n"
           "downloads in %.2f seconds.\n\n",
           download_speed_mbitss, file_size_mbytes, download_time_s);

    return 0;
}