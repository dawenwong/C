//intconv.c -- some  mismatched integer conversions
#include<stdio.h>
#define PAGES 336
#define WORDS 65618
int main(int argc, char const *argv[])
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n",num,num);
    printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
    printf("num as int and char: %d %c\n",num,num);
    printf("WORDS as int,short and char: %d %hd %c\n",WORDS,WORDS,WORDS);


    return 0;
}
/*
Looking at the first line,you can see that both the %hd and %hu produce 336 as output for the variable
num;no problem there.On the second line,the %u(unsigned) verison of mnum came out as 65200,however,
not as the 336 you might have expected;this results from the way that signed short int values are 
represented on our reference system.First,they are 2 bytes size.Second,the system uses a method
called the two's complement to represent signed integer.In this method,the number 0 to 32767 represent
themself,and the numbers 32768 to 65535 represent negative numbers,with 65535 being -1,65534 being -2,
and so forth.Therefore,-336 represented by 65536 -336,or 65200.So 65200 represents -336 when interpreted 
as a signed int and represents 65200 when interpreted as an unsigned int.Be wary!One number can be 
interpresented as two different values.Not all systems use this method to represent negative integers.
Nonetheless,there is a moral:Don't expect a %u conversion to simply strip the sign from a number.

The third line shows what happens if you try to convert a value greater than 255 to a character.On
this system,a short int is 2 bytes and char is 1 byte.When printf() prints 336 using %c,it looks at 
only 1 byte out of the 2 used to hold 336.This truncation amounts to dividing the integer by 256 
and keeping just remainder.In this case,the remainder is 80,which ASCII value for the character P.More
technically,you can say that the number is interpreted modulo 256,which means using the remainder when
the number is divided by 256.

Finally,we tried printing an integer (65618) larger than the maximun short int (32767) allowed on
our system.Again,the computer does its modulo thing.The number 65618,because of its size,is stored 
as a 4-byte int value on our system.When we print it using the %hd specification,printf() uses only
the last 2 bytes.This corresponds to using the remainder after dividing by 65536.In thsi case,the 
remainder is 82.A remainder between 32767 and 65536 would be printed as a negative number because of 
the way negative numbers are stored.Systems with different integer size would have the same general
behavior,but with different numerical values. 

*/