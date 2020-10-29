/*
Some Addition Operators

C has about 40 operator,but some are used much more than others.The ones just covered are among the most 
common,but let's add four more useful operators to the list.

The sizeof Operator and the size_t type

You saw the sizeof operator in chapter 3,"Data and C." To review,the sizeof operator returns the size,
in bytes,of its operand.(Recall that a C byte is defined as the size used by the char type.In the past,
this has most often been 8 bits,but some charactor sets may use larger bytes.)The operand can be a specific
data object,such as the name of a variable,or it can be a type.If it is a type,such as float,the operand
must be enclosed in parentheses.The example in Listing 5.8 shows both forms:
*/


//sizeof.c -- uses sizeof operator
//uses C99 %z modifier -- try %u or %lu if you lack %zd
#include<stdio.h>
int main(void)
{
    int n = 0;
    size_t  intsize;

    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes;all ints have %zd bytes.\n",
            n,sizeof n,intsize);

    return 0;
}
/*
C says that sizeof returns a value of type size_t.This is an unsigned integer type,but not a brand-new 
type.Instead,as you may recall from the preceding chapter,it is defined in terms of the standard types.
C has a typedef mechanism (discussed further in the chapter 14 ,"Structures and and Other Data Forms")
that lets you create an alias for an existing type.For example:
    typedef double real;

makes real another name for double.Now you can declare a  variable of type real:
    real deal;   //using a typedef

The compiler will see the word real,recall that the typedef statement made real an alias for double,and
create deal as a type double variable.Similarly,the C header files system can use typeof to make size_t 
a synonym for unsigned int on one system or for unsigned long on another.Thus,when you use the size_t 
type,the compiler will substitute the standard type that works for your system.

C99 goes a step further and supplies %zd as a printf() specifier for displaying a zise_t value.If your
system doesn't implement %zd,you can try using %u or %lu instead.


*/