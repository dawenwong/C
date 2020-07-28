//stringf.c--string formatting
#include<stdio.h>
#include<string.h>
#define BLURB "Authentic imitation!"
int main(int argc, char const *argv[])
{
    printf("%d\n",strlen(BLURB));
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);

    return 0;
}
/*
Notice how,for the %2s specification,the field is expanded to contain all the characters in the string.
Also notice how the precision specification limits the number of characters printed.The .5 in the 
format specifier tells printf() to print just five characters.Again,the -modifier left-justifies the text.

Using What You Just Learned

Okey,you've seen some examples.Now ,how would you set up a statement to print something having the 
following form?
    The NAME family just may be $XXX.XX dollars richer!
Here,NAME and XXX.XX represent values that will be supplied by varibales in the program --say,name[40]
and cash;
One solution is:
    printf("The %s family just may be $.2f dollars richer!\n",name,cash);

What Does A Conversion Specification Convert?
Let's take a closer look at what a conversion specification converts?It converts a value stored in
the computer in some binary formed to a series of characters (a string ) to be displayed.For example,
the number 76 may be stored internally as binary 01001100.The %d conversion specifier converts this to 
the characters 7 and 6,displaying 76.The %x conversion converts the same value(01001100) to the 
hexadecimal representation 4c.The %c convert the same value to the character representation L.
The term conversion is proablely somewhat misleading because it might suggest that the original 
value is replaced with a converted value.Conversion specifications are really translation specifications
;%d means "translate the given value to a decimal integer text representation and print the representation."

Mismatched Conversions
Naturally,you should match the conversion specification to the type of value being printed.Often,
you have choices.For instance,if you want to print a type int value,you can use %d,%x,or %o.All these
specifiers assume that you are printing a type int value;they are merely provide different representations
of value.Similarly,you can use %f,%e,or %g to represent a type double value.

What if you mismatch the conversion specification to type?You've seen in the preceding chapter that 
mismatches can cause problems.This is very important point to keep in mind.
*/

