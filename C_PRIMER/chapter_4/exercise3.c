/*
Write a program that reads in a floating-point number and prints it first in deciaml-point notation
and then in exponential notation.Have the output use the following formats
    a.The input is 21.3 or 2.1e+001
    b.The input is +21.290 or 2.129E+001
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    double num1;
    double num2;

    printf("Enter a float number: \n");
    scanf("%lf",&num1);
    printf("The input is %2.1lf or %.1e \n",num1,num1);

    printf("Enter another number: \n");
    scanf("%lf",&num2);
    printf("The input is %+5.3lf or %5.3e.",num2,num2);
    
    return 0;
}
