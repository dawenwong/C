/*
Modulus Operator

The modulus operator is used in integer arithmetic.It gives the remainder that results when the integer 
to its left is divided by the integer to its right.For example,13 % 5(read as "13 modulo 5")has the value
3,because 5 goes into 13 twice,with a remainderof 3.Don't bother trying to use this operator with floating-point
numbers.It just won't work.

At first glance,this operator might strike you as an esoteric tool for mathematicians,but it is actually
rather practical and helpful.One common use is to help you to control the flow of a program.Suppose,for 
example,you are working on a bill-preparing program designed to add in an extra charge every third month.
Just have the program evaluate the month number modulo 3(that is,month % 3) and check to see whether the 
result is 0.If it is,the program adds in the extra charge.After you learn about if statements in chapter 7
"C Control Statements：Branching and Jumps",you'll understand this better.
*/
//min_sec.c -- converts seconds to minutes and seconds

#include<stdio.h>
#define SEC_PER_MIN 60     //seconds in a minute
int main(void)
{
    int sec,min,left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds(<= to quit):\n");
    scanf("%d",&sec);            //read number of seconds
    while(sec > 0)
    {
        min = sec / SEC_PER_MIN;  //truncated number of mintues
        left = sec % SEC_PER_MIN; //number of seconds left over
        printf("%d seconds is %d mintues,%d seconds.\n",sec,min,left);
        printf("Enter next value(<= to quite):\n");
        scanf("%d",&sec);
    }

    printf("Done!\n");
    return 0;
}
/*
Listing 5.2 used a counter to control a while loop.When the counter exceeded a given size,the loop quit.
Listing 5.9,however,uses  scanf() to fetch new values for the variable sec.As long as the value is positive,
loop continues.When the user enters a zero or negative value,the loop quits.The important design point in 
both cases is that each loop cycle revises the value of the variable being tested.

What about negative numbers?Before C99 settled on the "truncate toward zero" rule for integer division,
there were a couple of possibilities.But with the rule in place,you gey a negative modulus value if the 
first operand is negative,and you get a positive modulus otherwise.

If your system shows different behavior,it hasn't caught up to the C99 standard.In any case,the standard says,
in effect,that if a and b are integer values,you can calculate a%b by subtracting (a/b)*b from a.For example:
you can evaluate -11 % 5 this way:
    -11 - (-11/5)*5 = -11 - (-2)*5 = -11 - (-10)= -1
*/