/*
Division Operator:/

C uses the / symbol to represent division.The value to the left of the /is divided by the value to the 
right.For example,the following gives four the value of 4.0:
    four = 12.0 / 3.0;

Division works differently for integer types than it does for floating types.Floating-type division 
gives a floating-point answer,but integer division yields an integer answer.An integer can't have a 
fractional part,which makes dividing 5 by 3 awkward,because the answer does have a fractional part.
In C,any fraction resulting from integer division is discarded.This process is called truncation.
*/
//divide.c -- divisions we have known
#include<stdio.h>
int main(void)
{
    printf("integer division: 5/4 is %d\n",5/4);
    printf("integer division: 6/3 is %d\n",6/3);
    printf("integer division: 7/4 is %d\n",7/4);
    printf("floating division: 7./4 is %1.2f\n",7./4.);
    printf("mixed division: 7./4 is %1.2f\n",7./4);
    return 0;
}
/*
Notice how integer division does not round to the nearest integer,but always truncates (that is,discards
the entire fractional part).When you mixed integers with floating point,the answer came out the same as
floating point.Actually,the computer is not really capable of dividing a floating-point type by an integer
type,so the compiler converts both operands to a single type.In this case,the integer is converted to 
floating point before division.

Until the C99 standard,C gave language implementers some leeway in deciding how integer division with 
negative numbers works.One could take the view that the rounding procedure consits of finding the 
largest integer smaller than or equal to the floating-point number.Certainly,3 fits that description when
compared to 3.8.But what about -3.8?The largest integer method would suggest rounding to -4 because -4
is less than -3.8 .But another way of looking at the rounding process is that it just dumps the fractional 
part;that interpretation,called truncating toward zero,suggests converting -3.8 to -3.Before C99,some 
implementations used one approach,some the other.But C99 says to truncate toward zero,so -3.8 is converted
to -3.

The properties of integer division turn out to be handy for some problems,and you'll see an example fairly
soon.First,there is another important matter:What happens when you combine more than one operator into 
one statement?That is the next topic.
*/