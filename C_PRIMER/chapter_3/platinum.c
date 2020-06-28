/*platinum.c -- your weight in platinum*/
#include<stdio.h>
int main(void)
{
    float weight; // user weight 
    float value; // platinum equivalent

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    /*get input from the user         */
    scanf("%f",&weight);
    // assume platinum is $1700 per ounce
    // 14.5833 converts pounds avd. to ounces troy
    value = 1700.0*weight*14.5833;
    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth that ! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}
//What's New in This Program?
/*There are several new elements of C in this program:
    Notice that the code uses a new kind of variable declaration.The previous examples just used an integer variable 
    type(int),but this one adds a floating-point variable type(float) so that you can handle a wider a variety of data.
    The float type can hold numbers with decimal points.

    The program demonstrates some new ways of writing constants.You now have numbers with decimal points.

    To print this new kind of variable,use the %f specifier in the printf() code to handle a floating-point value.
    The .2 modifier to the %f specifier fine-tunes the appearance of the output so that it displays two places to the 
    right of the decimal.

    The scanf() function provides keyboard input to the program.The %f instructs scanf() to read a floating-point 
    number from the keyboard ,and the &weight tells scanf() to assign the input value to the variable named weight.
    The scanf() function uses the & notation to indicate where it can find the weight variable.The next chapter 
    discusses & further ;meanwhile ,trust us that you need it here.

    Perhaps the most outstanding new feature is that this program is interactive.The computer asks you for information
    and then uses the number you enter.An interactive program is more interesting to use than the noninteractive types.
    More important,the interactive approach makes programs more flexible. For example,the sample program can be used
    for any reasonable weight,not just for 156 pounds.You don't have to rewrite the program every time you want to try 
    it on a new person.The scanf() and printf() functions make this interactivity possible. The scanf() funcrion reads data
    from the keyboard and delivers that data to your screen.Together,these two functions enable you to establish a 
    two-way communication with your computer,and that makes using a computer much more fun.*/
    