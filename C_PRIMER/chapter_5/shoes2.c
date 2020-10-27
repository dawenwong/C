//shoes2.c -- calculates foot lengths for several sizes
#include<stdio.h>
#define ADJUST 7.31    //one kind of symbolic constant
int main(void)
{
    const double SCALE = 0.33;  //another kind of symbolic constant
    double shoe,foot;

    printf("Shoe size (men's)    foot length\n.");
    shoe = 3.0;
    while(shoe<18.5)   //Starting the while loop
    {
        foot = SCALE *shoe + ADJUST;
        printf("%10.1f %15.2f inches\n",shoe,foot);
        shoe = shoe + 1;

    }       //end of block
    printf("If the shoe fits,wear it.\n");
    return 0;
}
/*
Here is how the while loop works.When the program first reaches the while statement,it checkes to
see whether the condition whithin parentheses is true.In this case,the expression is as follows:
    shoe < 18.5;
The < symbol means "is less than".The variable shoe was initialized to 3.0,which is centainly less
than 18.5.Therefore,the condition is true and the program proceeds to the next statement,which converts
the size to inches.Then it prints the results.The next statement increases shoe by 1.0,make it 4.0:
    shoe  = shoe + 1.0;

At this point,the program returns to the while portion to check the condition.Why at this point?
Because the next line is a closing brace(}),and the code uses a set of braces ({}) to mark the extent
of the while loop.The statements between the braces are the ones that are repeated.The section 
of program between and including the braces is called a block.Now back to the program.The value 4 is
less than 18.5 ,so the whole cycle of embraced commands following the while is repeated.This continues
until shoe reaches a value of 19.0.Now the condition shoe < 18.5 becomes false because 19.0 is not 
less than 18.5 .When this happens,control passes to the first statement following the while loop.In 
this case,that is the final printf() statement.

You can easily modify this program to do other conversions.For example,change SCALE to 1.8 and ADJUST
to 32.0,you have a program that converts Centigrade and Fahrenheit.Change SCALE to 0.6214 and ADJUST
to 0,and you convert kilometers to miles.If you make these changes,you should change the printed
messages,too,to prevent confusion.

The while loop provides a convenient,flexble means of controlling a program.Now let's turn to the 
fundamental operators that you can use in your programs.
*/