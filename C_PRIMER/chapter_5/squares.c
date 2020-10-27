/*Multiplication Operator:*
  
Multiplication is indicated by the * symbol.The statement 
  cm = 2.54 * inch;
multiplies the variable inch by 2.54 and assigns the answer to cm.

By any chance,do you want a table of squares?C doesn't have a squaring function,but,as shown in Listing 
5.4 ,you can use multiplication to calculate squares.

*/
//squares.c -- produces a table of first 20 squares
#include<stdio.h>
int main(void)
{
    int num = 1;
    
    while (num < 21)
    {
        printf("%4d %15d\n",num,num*num);
        num = num + 1;
    }
    return 0;
}
/*
This program prints the first 20 integers and their squares,as you can verify for yourself.Let's look
at a more interesting example:
*/