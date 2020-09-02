/*
If you use scanf() to read a value for one of the basic variable types we've discussed,precede 
the variable name with an &.
If you use scanf() to read a string into character array,don't use an &. 
*/
// input.c -- when to use &
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;        //variable
    float assets;   //variable
    char pet[30];   //string

    printf("Enter your age,assets,and favorite pte.\n");
    scanf("%d %f",&age,&assets);    //use the & here
    scanf("%s",pet);                //no & for char array
    printf("%d %.3f %s\n",age,assets,pet);

    return 0;
}
/*
The scanf() function uses whitespace(newlines,tabs,and spaces) to decide how to divide the input into
separate fields.It matches up consecutive conversion specifications to consecutive fields,skipping 
over the whitespace in between.Note how this sample run spread the input over two lines.You could 
just as well have used one or five lines,as long as you had at least one newline,space,or tab between
each entry:
    Enter your age,assets,and favorite pte.
    42


        3221.5

        GUASD
The only exception to this is the %c specification,which reads the very next character,even if that 
character is whitespace.We'll return to this topic in a moment.
The scanf() function uses pretty much the same set of conversion-specification characters as printf()
does.The main difference is that printf() use %f,%e,%E,%g,and %G for both type float and type double
,whereas scanf() uses them just for type float,requiring the l modifier for double.Table 4.6 lists
the mian conversion specifiers as described in the C99 standard.
        ANSI C CONVERSION SPECIFIERS FOR SCANF()
    Conversion Specifier            Meaning
    %c                              Interpret input as a character
    %d                              Interpret input as a signed decimal integer
    %e,%f,%g,%a                     Interpret input as a floating-point number(%a is C99)
    %E,%F,%G,%A                     Interpret input as a floating-point number(%A is C99)
    %i                              Interpret input as a signed decimal integer
    %o                              Interpret input as a signed octal integer
    %p                              Interpret input as a pointer(an address)
    %s                              Interpret input as a string.Input begins with the first non-whitespace
                                    character and includes everything up to the next whitespace character.
    %u                              Interpret input as an unsigned decimal integer
    %x,%X                           Interpret input as a signed hexadecimal integer

You also can use modifiers in the conversion specifiers shown in Table 4.6.The modifiers go between
the percent sign and the conversion letter.
                Conversion Modifiers for scanf()
    Modifier                    Meaning
    *                           Suppress assignment
                                Example:"%*d"
    digit(S)                    Maximum field width.Input stops when the maximum field width is 
                                reached or when the first whitespace character is encountered,whichever
                                comes first.
                                Example:"%10s".
    hh                          Read an integer as an unsigned char or signed char.
                                Example:"%hhd","%hhu"
    ll                          Read an integer as a long long or unsigned long long.
                                Example:"%lld","%llu".
    h,l,or L                    "%hd" and "%hi" indicate that the value will be stored in a short
                                int."%ho","%hx",and "%hu" indicate that the value will be stored in an
                                unsigned short int."ld" and "%li" indicate that the value will stored in a
                                long ."%lo","%lx",and "%lu" indicate that the value will be stored in unsigned
                                long."%le","%lf",and "%lg" indicate that the value will be stored
                                in type double.Using L instead of l with e,f,and g indicates that the value
                                will be stored in type long double.In the absence of these modifiers,d,i,o,and x
                                indicate type int,and e,f,and g indicate type float.
    j                           When followed by an integer specifier,indicates using the intmax_t or
                                uintmax_t type (C99).
                                Example:"%jd","%ju"
    z                           When followed by an integer specifier,indicate using the type returned by
                                sizeof.
                                Examples:"%zd","%zo"
    t                           When followed by an integer specifier,indicate using the type used to 
                                represent the difference between two pointer.
                                Examples:"%td","%tx"

As you can see,using conversion specifiers can be involved,and these tables have omitted some of 
the features.The omitted features primarily facilitate reading selected data from highly formatted 
sources,such as punched cards or other data records.

The scanf() View of input
Let's look in more detial at how scanf() reads input.Suppose you use a %d specifier to read an integer.
The scanf() function begins reading input a character at a time.It ships over whitespace characters(
spaces,tabs,and newlines)until it finds a non-whitespace character.Because it is attempting to read
an integer,scanf() expects to find a digit character or,perhaps,a sign (+ or -).If it finds a digit 
or sign,it saves that character and then reads the next character.If that is a digit,it saves the digit
and reads the next character.scanf() continues reading and saving characters until it encounters a 
nondigit.It then concludes that is has reached the end of the integer.scanf() places the nondigit
back into the input.This means that the next time the program goes to read input,it starts at the 
previously rejected,nondigit character.Finally,scanf() computes the numerical value corresponding to 
the digit it read and places that valuein the specified variable.
If you use a field width,scanf() halts at the field end or at the first whitespace,whichever comes 
first.
What if the first non-whitespace character is,say,an A instead of a digit?Then scanf() stops right
there and places the A (or whatever)back in the input.No value is assigned to the specifier variable
,and the next time the program reads input,it starts at the A again.If your program has only %d specifiers
,scanf() will never get past that A.Also,if you use a scanf() statement with several specifiers,C
requires the function to stop reading input at the first failure.
Reading input using the other numeric specifiers works much the same as the %d case.The main difference 
is that scanf() may recognize more characters as being part of the number.For instance,the %x specifier
requires that scanf() recognize the hexadecimal digits a-f and A-F.Floating-point specifiers require 
scanf() to recognize decimal points,e-notation,and the new p-notation.
If you use an %s specifier,any character other than whitespace is acceptable,so scanf() ships whitespace 
to the first non-whitespace character and then saves up non-whitespace characters until hitting whitespace
again.This means that %s results in scanf() reading a single word--that is,a string with no whitespace
in it.If you use a field width,scanf() stops at the end of the field or the first whitespace,whichever
coms first.You can't use the field width to make scanf() read more than one word for one %s specifier.
A final point:When scanf() places the string in the designated array,it adds the terminating '\0'
to make the array contents a C string.
If you use a %c specifier,all input character are fair game.If the next input character is a space 
or a newline,a space or a newline is assigned to the indicated variable;whitespace is not skipped.
Actually,scanf() is not the most commonly used input function in C.It is featured here because of 
its versatility(it can read all the different data type),but C has several other input fucntions,
such as getchar() and fgets(),that are better suited for specific tasks,such as reading a single 
characters or reading strings containing spaces.We will cover some of these function in Chapter 7
"C control Statements:Branching and Jumps";

Regular Characters in the Format String
The scanf() function does enable you to place ordinary characters in the format string.Ordinary 
characters other than the space charatcer must be matched exactly by the input string.For example,
suppose you accidentally place a comma between two specifiers:
  scanf("%d,%d",&n,&m);
The sancf() function interprets this to mean that you will type a number,type a comma,and then type
a second number.That is,you would have to enter two integers as follows:
    88,121
Because the comma comes immediately after the %d in the format string,you would have to type it 
immediately after the 88.However,because scanf() skips over whitespace preceding an integer,you 
could type a space or newline after the comma when entering the input.That is ,
    88,  121
    and
    88,
    121
also would be accepted.
A space in the format string means to skip over any whitespace before the next input item.For instance,
the statement
    scanf("%d,%d",&n,&m);
would accept any of the following input lines:
    88,121
    88,    121
    88    ,121
Note that the concept of "any whitespace" includes the special cases of no whitespace.
Except for %c,the specifiers automatically skip over whitespace preceding an input value,so
scanf("%d%d",&n ,&m) behaves the same as scanf("%d %d",&n ,&m).For %c ,adding a space character 
to the format string does make a  difference.For example,if %c is preceded by a space in the format
string,scanf() does skip to the first non-whitespace character.That is,the command scnaf("%c", &ch)
reads the first character encountered in input,and scanf("%c", &ch) reads  the first non-whitespace
character encountered.
    
*/