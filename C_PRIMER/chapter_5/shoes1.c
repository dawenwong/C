/* shoes1.c--converts a shoes size to inches*/
#include<stdio.h>
#define ADJUST 7.31  //one kind of symbolic constant
int main(int argc, char const *argv[])
{
    const double SCALE = 0.333;   //Another kind of symbolic constant
    double shoe,foot;

    shoe =9.0;
    foot = SCALE*shoe + ADJUST;
    printf("Shoe size(men's)  foot length\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);
    return 0;
}
/*
The program demonstrates two ways to create symbolic constants,and it uses multiplication and 
addition.It takes your shoe size(if you wear a size 9)and tells you how long your foot is in inches.
"But",you said,"I could solve this program by hand (or with a calculator) more quickly than you
could type the program."That's a good point.A one-shot program that does just one shoe size is a 
waste of time and effort.You could make the program more usefully by writing it as an interactive
program,but still barely taps the potential of a computer.

What's needed is some way to have a computer do repetitive calculations for a succession of shoe 
sizes.After all,that's one of the main reasons for using a computer to do arithmetic.C offers several
methods for doing repetitive calculations,and we will outline one here.This method,called a while-loop
,will enable you to make a more interesting exploration of operators.

*/

