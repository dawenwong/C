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
