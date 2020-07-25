//pizza.c -- uses difined constants in a pizza context
#include<stdio.h>
#define PI 3.14159
int main(int argc, char const *argv[])
{
    float area,circum,radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);
    area = PI*radius*radius;
    circum = 2*PI*radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f,area = %1.2f\n",circum,area);  
    return 0;
}
/*
The %1.2f in the printf() statement causes the printout to be rounded to two decimal places.
Of course,this program may not reflect your major pizza concerns,but it does fill a small niche 
in the world of pizza programs.

The #define statement can be used for character and string constants,too.Just use single qutoes
for the former and double qutoes for the latter.The following examples are valid:
    #define BEEP '\a'
    #define TEE 'T'
    #define ESC '\033'
    #define OOPS "Now you have done it!"
Remember that everything following the symbolic name is substituted for it.Don't make this common
error:
    #define TOES = 20   //It is wrong 

*/
