//praise2.c
//try the %u or %lu specifiers if your implementation
//does not recognize the %zd specifier
#include<stdio.h>
#include<string.h>    //provides the strlen() prototype
#define PARISE "You are an extraordinary being"
int main(int argc, char const *argv[])
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s",name);
    printf("Hello,%s.%s\n",name,PARISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
            strlen(name),sizeof name);
    printf("The phrase of parise has %zd letters ",
            strlen(PARISE));
    printf("and occupies %zd memory cells.\n",sizeof PARISE);

    return 0;
}
/*
The string.h file contains function  prototypes for several string-related functions,including 
strlen().

More generally,C divides the C functions library into families of related functions and provides
a header file for each family.For example,printf() and scanf() belong to a family of standard input
and output functions and use the stdio.h header file.The strlen() functions joins several other 
string-related functions,such as functions to copy strings and to search through strings,in a family
served by the string.h header.

Notice that Listing 3.4 uses two methods to handle long printf() statement.The first method spreads
one printf() statement over two lines.The second method uses two printf() statement to print just 
one line.The newline character \n appears only in the second statement.

Running the program could produce the following interchange:
See what happens.The array name has 40 memory cells,and that is what the sizeof operator reports.
Only the first 11 cells are needs to hold  Serendipity,however,and that is what strlen() reports.
The twelfth cell in the array name contains the null character,and its presence tells strlen() when
to stop counting.

When you get to PARISE,you find that strlen() again gives you the exact number of characters (including
spaces and punctuation) in the string.The sizeof operator gives you a number one larger because it 
also counts the invisible null character used to end the string.The program didn't tell the computer
how much memory to set aside to store the phrase.It had to count the number of characters between
the double quotes itself.

As mentioned in Chapter 3"Data and C",the C99 and C11 standards use a %zd specifier for the type 
used by the sizeof operator.This also applies for type returned by strlen().For earlier versions
of C you need to know the actual type returned by sizeof and strlen();typically that would be 
unsigned or unsigned long.

One other point:The preceding chapter used sizeof with parentheses,but this example doesn't.Whether you 
use parentheses depends on whether you want the size of a type or the size of a particular quantity.
Parentheses are required for type but are optional for particular quantities.That is,you would use
sizeof(char) or sizeof(float) but can use sizeof name or sizeof 6.28.However,it is all right to 
use parentheses in these cases,too,as in sizeof(6.28).
*/

 