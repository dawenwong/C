/*Integer Overflow
What happens if an integer tries to get too big for its type?  
*/
//toobig.c -- exceeds maximum int size on our system.
#include<stdio.h>
int main(void)
{
    int  i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n",i,i+1,i+2);
    printf("%u %u %u\n",j,j+1,j+2); //use the %u specifier to display unsigned int values.

    return 0;
}
/*The result:
            2147483647 c -2147483647
            4294967295 0 1
*/
/*
The unsigned integer j is acring like a car's odometer.When it reaches its maximun value,it starts over at the beginning,
The integer i acts similarly.The main difference is that the unsigned int variable j,like an odometer,begins at 0;
but the integer variable i begins at -2147483648.Notice that you are not informed that i exceeded(overflow) its maximum
value.
The behavior describe here is mandated by the rules of C for unsigned type.The standard doesn't define how signed types
should behave.The behavior shown here is typical,but you could encounter something different.
*/
/*long constants and long long constants
Normally,when you use a number such as 2345 in your program code,it is stored as an int type.What if you use a 
number such as 100000000 on a systems in which int will not hold such a large number?Then the compiler treats 
it as a long int,assuming that type is large enough.If the number is large than the long maximum,C treats it as
unsigned long.If that is still insufficient,C treats the value as long long or unsigned long long,if those type are 
available.
Octal and hexadecimal constants are treats as type int unless the value is too large.Then the compiler tries unsigned 
int.If that doesn't work,it tries,in order,long,unsigned long,long long,and unsigned long long.
Sometimes you might want the compiler to store a small number as a long integer.Programming that involves explicit
use of memory addresses on an IBM PC,for instance,can create such a need.Also,some standard C functions require 
type long values.To cause a small constant to be treated as type long,you can append an l(lowercase L) or L as a 
suffix.The second form is better because it look less like the digit 1.Therefore,a systems with a 16-bit int and 
a 32-bit long treats the integer 7 as 16-bit and the integer 7L as 32 bits.The l and L suffix can also be used with 
octal and hexadecimal integers,as in 020L and 0x10L.

Similarly,on those systems supporting the long long type,you can use an ll or LL suffix to indicate a long long 
value,as in 3LL.Add a u or U to the suffix for unsigned long long,as in 5ull or 10LLU or 6LLU or 9Ull.
*/
