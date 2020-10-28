//rules.c -- precedence test
#include<stdio.h>
int main(void)
{
    int top,score;

    top = score = -(2+5)*6 + (4+3*(2+3));
    printf("top = %d,score = %d\n",top,score);
    return 0;
}
/*
What value will this program print?Figure it out,and then run the program or read the following description
to check your answer.

First,parentheses have the highest precedence.Whether the parentheses in -(2+5)*6 or in (4+3*(2+3)) are
evaluated first depends on the implementation,as just discussed.Either choice will lead to the same result
for this example,so let's take the left one first.The high precedence of parentheses means that in the 
subexpression -(2+5)*6 ,you evaluation (2+5) first,getting 7.Next,you apply the unary minus operator to 7
to get -7.
*/