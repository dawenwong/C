/*
Increment and Decrement Opearator:++ and --

The increment operator performs a simple task;it increments (increases) the value of its operand by 1.
This operator comes in two varieties.The first variety has the ++ come before the affected variable;
this is prefix mode.The second variety has the ++ after the affected variable;this is postfix mode.
The two modes differ with regard to the precise time that the incrementing takes place.We'll explain 
the similarities first and then return to that difference.The short example  in listing 5.10 shows how
the increment operator work.
*/
//add_one.c -- incrementing:prefix and postfix 
#include<stdio.h>
int main(void)
{
    int ultra = 0, super = 0;

    while(super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d ,ultra = %d\n",super,ultra);
    }
    return 0;
}