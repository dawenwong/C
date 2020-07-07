/*The simple program that initializes a variable and print the value of the variable,the value of a constant,and the 
value of a simple expression.*/
//print1.c -- displays some properties of printf()
#include<stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n",ten,2,ten-two);

    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n",ten);  // forgot 2 arguments

    return 0;
}
/*For the first line of output,the first %d represents the int variable ten,the second %d represents the int constant2
,and the third %d represents the value of the int expression ten - two.The second time,however,the program used ten 
to provide a value for the first %d and used whatever values happened to be lying around in memory for the next two.
You might be annoyed that the compiler doesn't catch such an obvious error.Blame the unusual design of printf().Most
functions take a specific number of arguments,and the compiler can check to see whether you've used the current number.
However,printf() can have one,two,three,or more arguments,and that keeps the compiler from using its usual methods for 
errot checking. */
