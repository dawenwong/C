/*5. There are approximately 3.156x10^7 seconds in a year.Write a program that requests your age
in years and then displays the equivalent number of seconds*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    double  year_in_seconds = 3.156E7;
    int age;
    printf("Please enter your age in year: ");
    scanf("%d",&age);
    printf("Your age %d in years equivalent the number of seconds is %e",age,age*year_in_seconds);

    return 0;
}
