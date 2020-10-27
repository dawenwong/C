/*
Exponential Growth

You have probably heard the story of the powerful ruler who seeks to reward a scholar who has done him
a great service.When the scholar is asked what he would like,he points to a chessboard and says,just one
grain of wheat on th first square,two on the second,four on the third,eight on the next,and so on.
The ruler,lacking mathmematical erudition,is astounded at the modesty of this request,for he had been
prepared to offer great riches.The joke,of course,is on the ruler,as the program in the Listing 5.5 shows
.It calculares how many grains go on each square and keeps a running total.Because you might not be up
to date on wheat crops,the program  also compares the running total to a very rough estimate of the annual
world wheat crop*/

// wheat.c -- exponential growth
#include<stdio.h>
#define SQUARES 64  //squares on a checkerboard
int main(void)
{
    const double CROP = 2E16;     //world wheat production in wheat grains
    double current,total;
    int count = 1;

    printf("square      grains      total       ");
    printf("fraction of \n");
    printf("            added        grains");
    printf("world total\n");
    total = current = 1.0; /*start with one grain*/
    printf("%4d %13.2e  %12.2e  %12.2e\n",count,current,
           total,total/CROP);
    while(count < SQUARES)
    {
        count = count + 1;
        current = 2.0*current;
        /*double grains on the next square*/
        total = total + current;     /*update total*/
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,
               total,total/CROP);
    }
    printf("That's all.\n");
    return 0;
}
/*
After 10 squares,the scholar has acquired just a little over a thousand grain of wheat,but look what 
has happened bu square 55!

    55      1.80e+16        3.60e+16        1.80e+00

The haul has exceeded the total world annual output!If you want to see what happens by the 64th square,
you will have to run the program yourself.

This example illustrates the phenomenon of exponential growth.The world population growth and our use of 
energy resources have followed the same pattern.
*/