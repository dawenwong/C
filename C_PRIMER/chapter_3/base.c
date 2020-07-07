/*Displaying Octal and Hexadecimal
Just as C enables you write a number in any one of three number systems,it also enables you to display a number in 
any of these systems.To display an integer in octal notation instead of decimal,use %o instead of %d.To display an 
integer in hexadecimal,use %x.If you want to display the C prefixes,you can use specifiers %#o,%#x,and %#X to generate
the o,0x,and 0X prefixes respectively.
*/
// base.c--print 100 in decimal,octal,and hex.
#include<stdio.h>
int main(void)
{
    int x = 100;

    printf("dec = %d;octal = %o;hex = %x\n",x,x,x);
    printf("dec = %d;octal = %#o;hex = %#x\n",x,x,x);

    return 0;
}
/*You see the  same value displayed in three different number systems.The printf()function makes the conversions.
Note that the 0 and the 0x prefixes are not displayed in the output unless you include the # as part of specifier.*/
/*Other integer type
C offers three adjective keywords to modify the basic integer type:short,long,and unsigned.Here are some points to keep
in mind:
        The type short int or,more briefly,short may use less storage than int,thus saving space when only small numbers
        are needed.Like int,short is a signed type.

        The type long int,or long,may use more storage than int,thus enabling you to express larger integer values.Like 
        int,long is a signed type.

        The type long long int,or long long,may use more storage than long.At the minimum,it must at least 64 bits.Like int
        ,long long is a signed type.

        The type unsigned int,or unsigned,is used for variables that have only nonnegative values.This type shifts the range
        of numbers that can be stored.For example,a 16-bit unsigned int allows a range from 0 to 65535 in value instead of 
        from -32768 to 32767.The bit used to indicate the sign of signed numbers now becomes another binary digit,allowing 
        the larger number.

        The types unsigned long int,or unsigned long,and unsigned short int,or unsigned short,are recognized as valid
        by the C90 standard.To this list,C99 adds unsigned long long int,or unsigned long long.

        The keywords signed can be used with any of the signed types to make your intent explicit.For example,short,
        short int,signed short,and signed short int are all names of the same type.

Declaring Other Integer Types 
Other integer types are declared in the same manner as the int type.The following list shows several examples.Not all
older C compilers recognize the last three,and the final example is new with the C99 standard.

long int estine;
long johns;
short int erns;
short ribs;
unsigned int s_count;
unsigned players;
unsigned long headcount;
unsigned short yesvotes;
long long ago;
*/