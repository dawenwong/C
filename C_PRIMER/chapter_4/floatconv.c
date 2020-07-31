//floatconv.c -- mismatched floating-point conversions
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld",n1,n2,n3,n4);
    return 0;
}
/*
The first line of the output shows that using %e specifier does not convert an integer to a floating-point
number.Consider,for example,what happens when you try to print n3(type long) using the %e specifier
First,the %e specifier causes printf() to expect a type double value,which is an 8-byte value on 
this system.When printf() looks at n3,which is a 4-byte value on this system,it also looks at the 
adjacent 4 bytes.Therefore,it looks at an 8 byte unit in which the actual n3 is embedded.Second,
it interpreteds the bits in this unit as a floating-point number.Some bits,for example,would be 
interpreted as an exponent.So even if n3 had the correct number of bits,they would be interpreted 
differently under %e than under %ld.The net result is nonsense.
The first line also illustrates what we mentioned earlier --that float is converted to double when used
as arguments to printf().On this system,float is 4 bytes,but n1 was expanded to 8 bytes so that printf()
would display it correctly.
The second line of output shows that printf() can print n3 and n4 correctly if the correct specifier
is used.
The third line of output shows that even the correct specifier can produce phony results if the printf()
statement has mismatches elsewhere.As you might expect, trying to print a floating-point value with an
%ld specifier fails,but here,trying to print a type long using %ld fails!The problem lies in how C
passes information to a function.The exact details of this failure are implementation dependent,but 
the sidebar "Passing Arguments" discusses  a representative system.
*/

/*
Passing Arguments
The mechanics of argument passing depend on the implementation.This is how argument passing word 
on one system.The function call looks like follows:
    printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
This call tells the computer to hand over the values of the variable n1,n2,n3,n4 to the computer.Here's
one common way that's accomplished.The program places the values in an area of memory called the stack.
When the computer puts these values on the stack,it is guided by the types of the variables,not by
the conversion specifiers.Consenquently,for n1,it places 8 bytes on the stack(float is converted to double)
.Similarly ,it places 8 more bytes for n2,followed by 4 bytes each for n3 and  n4.Then control shifts to 
the printf().This function reads the values off the stack but,when it does so,it reads them according 
to the conversion specifiers.The %ld specifier indicates that prinf() should read 4 bytes,so printf()
read the first 4 bytes in the stack as its first value.This is just the first half of n1,and it is 
interpreted as  a long integer.The next %ld specifier reads 4 more bytes;this is just the second half
of n1 and is interpreted as a second long integer.Similarly,the third and fourth instance of %ld cause
the first and second halves of n2 to be read and to be interpreted as two more long integers,so although 
we have the correct specifier for n3,and n4,printf() is reading the wrong bytes.


*/