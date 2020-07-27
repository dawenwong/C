//width.c--field widths
#include<stdio.h>
#define PAGES 959
int main(int argc, char const *argv[])
{
    printf("*%d*\n",PAGES);
    printf("*%4d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);
    return 0;
}
/*
It't prints the same quantity four times using different conversion specifications.It uses an asterisk(*)
to show you where each field begins and ens.The first conversion specification is %d with no modifiers.It 
produces a field with the same width as the integer being printed.This is the default option;that is,
it's what's printed if you don't give further instructions.The second conversion specification is %2d.
This should produce a field width of 2,but because the integer is three digits long,the field is 
expanded automatically to fit the number.The next conversion specification is %10d.This produces 
a field 10 spaces wide,and indeed,there are seven blanks and three digits between the asterisks,
with the number tucked into the right end of the field.The final specification is %-10d.It also 
produces a field 10 spaces wide,and the - puts the left end,just as advertised.After you get used 
to it,this system is easy to use and gives you nice control over the appeareance of your output.Try
altering the value for PAGES to see how different numbers of digits are print.

*/
