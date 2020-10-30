//post_pro.c -- postfix vs prefix
#include<stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post,pre_b;

    a_post = a++;
    pre_b = ++b;

    printf("a    a_post   b   pre_b\n");
    printf("%1d  %5d  %5d %5d\n",a,a_post,b,pre_b);
    return 0;
}
/*
Both a and b were increased by 1,as promised.However,a_post has the value of a before a changed,
but b_pre has the value of b after b changed.This is the difference between the prefix form and the 
postfix form.

    a_post = a++;  //postfix:a si changed after its value is used
    b_pro = ++b;  //prefix:b is changed before its value is used

When one of these increment operators is used by itself,as in a solitary ego++;statement,it doesn't matter
which form you use.The choice does matter,however,when the operator and its operand are part of a larger
expression statements you just saw.In this kind of situation,you must give some thought to the result 
you want.For instance,recall that we suggested using the following :
    while (++shoe < 18.5)

This test condition provides a table up to size 18.If you use shoe++ instead of ++shoe,the table will go 
to size 19 because shoe will be increased after the comparison intead of before.
Of course,you could fall back on the less subtle form
    shoe = shoe + 1;
but then no one will believe you are a true C programer.

You should pay special attention to the examples of increment operators as you read through this book.
Ask yourself if you could have used the prefix and the suffix forms interchangeably or if circumstances
dictated a particular choice.

    q = 2 * ++a ;
    //First,increment a by 1;then,multiply a by 2 and assign to q

    q = 2 * a++;
    //First,multiply a by 2,assign to q,then,increment a by 1

Perhaps an even wiser policy is to avoid code in which it makes a difference whether you use the prefix
or postfix forms.

    b = ++i;  //different result for b if i++ is used

uses
    ++i;   
    b = i;

*/
