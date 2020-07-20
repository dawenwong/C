/*
    Floatting-point round-off errors
    Take a number,add 1 to it ,and subtract the original number.You get 1.A floating-point calculation,such as
    the following ,may give another answer.
*/
// floatter.c -- demonstrates round-off error
#include<stdio.h>
int main(void)
{
    float a,b;
    b = 2.0e20+1.0;
    a = b - 2.0e20;

    printf("%f\n",a);
    return 0;
}
/*
    The reason for these odd results is that the computer doesn't keep track of enough decimal places to 
    do the operation correctly.The number 2.0e20 is 2 followed by 20 zeros and,by adding 1,you are trying 
    to change the 21st digit.To do this correctly ,the computer would need to be able to store a 21-digit number
    .A float number is typically  just  six or seven digits scaled to bigger or smaller numbers with an 
    exponent.The attempt is doomed.On the other hand,if you used 2.0e4 instead of 2.0e20,you would get the 
    correct answer because you are trying to change the fifth digit,and float numbers are precise enough for that.  
*/
