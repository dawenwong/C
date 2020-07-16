// altnames.c -- portable names for integer types
#include<stdio.h>
#include<inttypes.h>   //supports portable types
int main(void)
{
    int32_t me32;    //me32 a 32-bit signed variable

    me32 = 45933945;
    printf("First,assume int32_t is int: ");
    printf("me32 = %d\n",me32);
    printf("Next,let's not make any assumptions.\n");
    printf("Instead,use a \"macro\" from inttypes.h: ");
    printf("me32= % " PRId32 "\n",me32);

    return 0;
}
/*
Types float,double,and long double

The various integer types serve well for most software development projects.However,financial and mathematiclly 
oriented programs often make use of floating-point numbers.In C,such numbers called type float,double,or long double
.They correspond to the real types of FORTRAN and Pascal.The floating-point approach,as already mentioned,enables you 
to  represent a much greater range of numbers,including decimal fractions.Floating-point number representation is
similar to scientific notation,a system used by scientists to express very large and very small numbers.

In scientific notation,numbers are represented as decimal numbers times powers of 10.
The first column shows the usual notation,the second column scientific notation,and the third column exponential 
notation,or e-notation,which is the way scientific notation is usually written for and by computers,with the e followed
by the power of 10.

The C standard provides that a float has to be able to represent at least xie significant figures and allow a range of
at least 10e-37 to 10e37.The first requirement means,for example,that a float has to represent accurately at least
the first six digits in a number such as 33.333333.The second requirement is handy if you like to use numbers such 
as the mass of the sun (2.0e30 kilograms),the charge of a proton (1.6e-19 coulombs),or the national debt.Often,
systems use 32 bits to store a floating-point number.Eight bits are used to give the exponent its value and sign,
and the 24 bits are used to represent the nonexponent part,called the mantissa or significant,and its sign.

C also has a double (for double precision) floating-point type.The double type has the same minimum range requirements
as float,but it extends the minimum number of significant figures that can be represented to 10.Typical double 
representations use 64 bits instead of 32.Some systems use all 32 additional bits for the nonexponent part.This increases
the number of significant figrues and reduces round-off errors.Other systems use some of the bits to accommpdate 
a larger exponent;this increases the range of numbers that can be accommodate.

*/