/*Printing characters
The printf() function uses %c to indicate that a character should be printed.Recall that a character variable 
is stored as a 1-byte integer value.Therefore,if you print the value of a char variable with the usual %d specifier
you get an integer.The %c specifier tells printf() to display the character that has that integer as its code value.
*/
// charcode--displays code number for a character
#include<stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c",&ch); /*inputr character*/
    printf("The code for %c is %d.\n",ch,ch);
    
    return 0;
}
