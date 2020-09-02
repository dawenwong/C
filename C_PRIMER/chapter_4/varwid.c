/*
The * Modifier with printf() and sancf()
Both printf() and scanf() can use the * modifier to modify the meaning of a specifier,but they do
so in dissimilar fashions.First,let's see what the * modifier can do for printf()

Suppose that you don't want to commit yourself to a field width in advance but rather you want the 
program to specify it.You can do this by using  * instead of a number for the field width,but you 
also have to add an argument to tell what the field width should be.That is,if you have the conversion
specifier %*d,the argument list should include a value for * and a value for d.The technique also 
can be used with floating-point values to specify the precision as well as the field width.
*/
// varwid.c--uses variable-width output field
#include<stdio.h>
int main(int argc, char const *argv[])
{
    unsigned width,precision;
    int number = 256;
    double weight =242.5;

    printf("Enter a field width:\n");
    scanf("%d",&width);
    printf("The number is:%*d\n",width,number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d",&width,&precision);
    printf("Weight=%*.*f\n",width,precision,weight);
    printf("Done!\n");

    return 0;
}

