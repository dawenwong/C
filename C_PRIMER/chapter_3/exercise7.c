/*7. There are 2.54 centimeters to the inch.Write a program that asks you to enter your height
in inches and then displays your height in centimeters .Or,if you prefer,ask for the height in 
centimeters and convert that to inches.*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float cm_inch = 2.54;
    float height;
    float h_cm_in;
    printf("Enter your height in centimeters: ");
    scanf("%f",&height);
    h_cm_in = height / cm_inch;
    printf("Your height is %.2f centimeters or %.2f inches.\n",height,h_cm_in);

    return 0;
}
