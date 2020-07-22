/*6. The mass of a single molecule of water is about 3.0x10^-23 grams.A quart of water is about 
950 grams,Write a program that requests an amount of water,in quarts,and displays the number 
of water molecule is that amount.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float mass_mol = 3.0e-23;
    float mass_qt = 950;
    float quarts;
    float molecules;

    printf("Please enter the number of quarts of water: ");
    scanf("%f",&quarts);
    molecules = quarts * mass_qt / mass_mol ;
    printf("%f quarts of water contain %e molecules.\n",quarts,molecules);
    return 0;
}
