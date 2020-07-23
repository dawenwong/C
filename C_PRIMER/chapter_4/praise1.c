//praise1.c -- use an assortment of strings
#include<stdio.h>
#define PRAISE "You are an extraodinary being."
int main(int argc, char const *argv[])
{
    char name[40];
    printf("What's your name?\n");
    scanf("%s",name);
    printf("Hello,%s.%s\n",name,PRAISE);
    return 0;
}
/*You do not have to put the null character into the name array yourself.That task is done for you 
by scanf() when it reads the input.Nor do you include the null character in the character string 
constant PRAISE.We'll explain the #define statement soon;for now,simply note that the double quotation
marks that enclose the text following PRAISE identify the text as a string.The compiler takes care of
putting in the null character.
Note(and this is important) that scanf() just reads Angela Plain's first name.After scanf() starts 
to read input,it stops reading at the first whitespace(blank,tab,or newline) it encounters.Therefore,
it stops scanning for name when it reaches the blank between Angela and Plains.In general,scanf()
is used with %s to read only a single word,not a whole phrase,as a string.C has other input-reading 
function,such as fgets(),for handling general strings.
*/
/*
String Versus Character
The string constant "x" is not the same as the character constant 'x'.One difference is that 'x' is 
a basic type char,but "x" is a derived type,an array of char.A second difference is that "x" really
consists of two characters,'x' and '\0',the null character.
*/