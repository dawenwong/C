/*In the U.S system of volume measurements,a pint is 2 cups,a cup is 8 ounces,an ounce is 2 
tablespoons,and a tablespoon is 3 teaspoons.Write a program that requests a volume in cups and 
displays the equivalent volumes in pints,ounces,tablespoons,and teaspoons.Why does a floating-point
type make more sense for this application than an integer type?*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float pints,cups,ounces,tablespoons,teaspoons;
    printf("Enter the volumes in cups: ");
    scanf("%f",&pints);
    printf("%.2f pints = %.2f cups = %.2f ounces = %.2f tablespoons = %.2f teaspoons",
        pints,2*pints,16*pints,32*pints,96*pints);
    return 0;
}
