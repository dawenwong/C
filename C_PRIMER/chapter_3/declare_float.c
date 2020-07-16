/*Declaring Floating-point variables

    Floating-point variables are declared and initialized in the same manner as their integer cousins.
*/
float noah, jonah;
double trouble;
float planck = 6.63e-34;
long double gnp;
/*Floating-point constants
There are many choices open to you when you write a literal floating-point constant.The basic form of a floating 
-point literal is a signed series of digits,including a decimal point,followed by an e or E,followed by a signed 
exponent indicating the power of 10 used.Here are two valid floating-point constants:
-1.56E+12
2.87e-3
*/
/*You can leave out positive signs.You can do without a decimal point(2E5) or an exponential part(19.28),but not
both simultaneously.You can omit a fractional part(3.E16) or an integer part(.45E-6),but not both.
3.123444
.2
4e16
.8e-5
100.

Don't use spaces in a floating-point constant:
WRONG:1.56 E+12
*/
/*By default,the compiler assumes floating-point constants are double precision.Suppose,for example,that some is 
a float variable and that you have the following statement:

some = 2.0 * 4.0;

Then 4.0 and 2.0 are stored as double,using(typically) 64 bits for each.The product is calculated using double 
precision arithmetic,and only then is the answer trimmed to regular float size.This ensures greater precision for
you calculations,but it can slow down a program.

C enables you to override this default by using an f or F suffix to make the compiler treat a floating-point 
constant as type float;examples are 2.3f and 9.11E9F.An l or L suffix makes a number type long double;examples are
54.3l and 4.32eL.Note that L is less likely to be mistaken for 1(one) than is l.If the floating-point number has 
no suffix,it is type double.

Scine C99,C has a new format for expressing floating-point constants.It use a hexadecimal prefix(0x or 0X) with 
hexadecimal digits,a p or P instead of e or E,and an exponent that is a power of 2 instead of a power of 10.Here's 
what such a number might look like:

0xa.lfp10;
*/

/*
*/

