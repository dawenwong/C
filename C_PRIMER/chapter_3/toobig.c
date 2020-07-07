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
