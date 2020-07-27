//flags.c--illustrates some formatting flags
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("%x %X %#x\n",31,31,31);
    printf("**%d**% d**% d**\n",42,42,-42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);
    return 0;
}
/*
First,1f is the hex equivalent of 31.The x specifier yields 1f,and the X specifier yields 1F.
Using the # flag provides an initial 0x.
The second line of output illustrates how using a space in the specifier produces a leading space
ofr the positive values,but not for negative values.This can produce a pleasing output because positive
and negative values with the same number of significant digits are printed with the same field widths.

The third line illustrates how using a precision specifier (%5.3d) with an integer form produces 
enough leading zeros to pad the number to the minimum value of digits.Using the 0 flag,however,pads
the number with enough leading zeros to fill the whole field width.Finally,if you provides both the 
0 flag and the precision specifier,the 0 flag is ignored.
*/