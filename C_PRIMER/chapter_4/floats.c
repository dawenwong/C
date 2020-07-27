//floats.c--some floating-point combinations
#include<stdio.h>
int main(int argc, char const *argv[])
{
    const double RENT = 3852.99;   //const-style constant

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);
    printf("*%3.1f*\n",RENT);
    printf("*%10.3f*\n",RENT);
    printf("*%10.3E*\n",RENT);
    printf("*%+4.2f*\n",RENT);
    printf("*%010.2f*\n",RENT);
    return 0;
}
/*
The example begins with the default version,%f.In this case,there are two defaults-the field width 
and the number of digits to the right of the decimal.The second default is six digits,and the field
width is whatever it takes to hold the number.
Next is the default for %e.It prints one digit to the left of the decimal point and six places to 
the right.We're getting a lot of digits!The cure is to specify the number of decimal places to the 
right of the decimal,and the next four examples in the segment do that.Notice how the fourth and 
the sixth examples cause the output to be rounded off.Also,the sixth example uses E instead of e.
Finally,the + flag causes the result to be printed with its algebraic sign,which is a plus sign in 
this case,and the 0 flag produces leading zeros to pad the result to the full field width.Note that 
in the specifier %010.2f,the first 0 is flag,and the remaining digits before the period (10) specify
the field width.
You can modify the RENT value to see how variously sized values are printed.  
*/
