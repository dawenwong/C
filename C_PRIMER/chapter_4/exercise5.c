/*
Write a program that requests the download speed in megabits per second(Mbs) and the size of a file
in megabytes(MB).The program should calucate the download time for the file.Note that in this context
one byte is eight bits.Use type float,and use / for division.The program should report all three 
values(download speed,file size,and download time)showing two digits to the  right of the decimal
point,as in the following:
    At 18.12 megabits per second,a file of 2.20 megabytes
    downloads in 0.97 second.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float speed;
    float bytes;

    printf("What's speed when you download(Mbs)?");
    scanf("%f",&speed);
    printf("How large is the file size(MB)?");
    scanf("%f",&bytes);
    printf("At %.2f megabits per second,a file of %.2f megabytes download in %.2f seconds\n",speed,bytes,(bytes*8)/speed);
    return 0;
}
