/*
Printing Floating-point values

The printf() function uses the %f format specifier to print type float and double numbers using decimal notation,
and it uses %e to print them in exponential notation.If your system supports the hexadecimal format for floating-point
numbers,you can use a or A instead of e or E.The long double type requires the %Lf,%Le,and %La specifiers to print
that type.Note that both float and double use the %f,%e,or %a specifier for output.That's because C automatically 
expands type float values to type double when you are passed as arguments to any function,such as printf(),that 
doesn't explicitly prototype the argument type.
*/
#include<stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n",aboat,aboat);
    printf("And it's %a in hexadecimal,power of 2 noataion\n",aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("%Lf can be written %Le\n",dip,dip);

    return 0;
}

/*
Floating-Point overflow and underflow

Suppose the biggest possible float value on your system is about 3.4E38.

float toobig  = 3.4E38 * 100.0f;
printf("%e\n",toobig);

This is an example of overflow -- when a calculation leads to a number too large to be expressed.The behavior 
for this case used to be undefine,but now C specifies that toobig gets assigned a special value that stands for
infinity and that printf() displays either infinity or inf for the value.

What about dividing very small numbers ?Here the situtaion is more involved.Recall that a float number is stored 
as exponent and as a value part,or mantissa.There will be a number that has the smallest possible exponent and also
the smallest value that still use all the bits available to represent the mantissa.This will be the smallest number
that is still represented to the full precision availabel to a float value.Now divide it by 2.Normally,this reduces
the exponent,but the exponent already is as small as it can get.So,instead,the computer moves the bits in the mantissa
over,vacating the first position and losing the last binary digit.An analogy would be taking a base 10 value with 
four significant digits,such as 0.1234e-10,dividing by 10,and getting 0.0123e-10.You get an answer,but you've lost
a digit in the processs.This situtaion is called underflow,and C refers to floating-point values that have lost the
full precision of the type as subnormal.So dividing the smallest positive normal floating-point value by 2 results
in a subnormal value.If you divide by a large enough value,you lose all the digits and are left with 0.The C library
now provides functions that you check whether your computations are producing subnormal values.

There's another special floating-point value that can show up:NaN,or not-a-number.For example,you give the asin() 
function a value,and it returns the angle that has that value as its sine.But the value of a sine can't be greater 
than 1,so the function is undefined for values in excess of 1.In such cases,function returns the NaN value ,which 
printf() displays as nan,NaN,or something similar.
*/