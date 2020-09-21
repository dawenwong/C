/*
Write a program that sets a type double variable to 1.0/3.0 and a type float variable to 1.0/3.0.
Display each result three times--once showing four digits to the right of the decimal,once showing 
12 digits to the right of the decimal,and once showing 16 digits to the right of the decimal.
Also have the program include float.h and display the values of FLT_DIG and DBL_DIG,Are the displayed
values of 1.0/3.0 consistent with these values?
*/
#include<stdio.h>
#include<float.h>
int main(int argc, char const *argv[])
{
    double n1 = 1.0/3.0;
    float n2 = 1.0/3.0;

    printf("*%.6lf*\n*%.12lf*\n*%.16lf*\n",n1,n1,n1);
    printf("*%.6f*\n*%.12f*\n*%.16f*\n",n2,n2,n2);
    printf("FLT_DIG = %d\n",FLT_DIG);
    printf("DBL_DIG = %d\n",DBL_DIG);
    return 0;
}
