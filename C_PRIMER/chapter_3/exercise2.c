/*2. Write a program that asks  you to enter an ASCII code value,such as 66,and then prints the 
character having that ASCII code*/
#include<stdio.h>
int main(void)
{
    int ascii;

    printf("Enter an ASCII code: ");
    scanf("%d", &ascii);
    printf("%d is the ASCII code for %c\n",ascii,ascii);
    return 0;
}
 