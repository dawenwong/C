//Taking Another Step in Using C
//fathm_ft.c -- converts 2 fathoms to feet
#include<stdio.h>
int main(void)
{
    int feet,fathoms;

    fathoms = 2;
    feet = 6*fathoms;
    printf("There are %d feet in %d fathoms!\n",feet,fathoms);
    printf("Yes,I said %d feet!\n",6*fathoms);

    return 0;
}
// Documentation 
/*First,the program begins with a comment(using the new comment style) identifying the filename and the purpose of the program.
This kind of documentation takes but a moment to do and is helpful later when you browse through several files or print them.*/
//Multiple Declarations
/*Next,the program declares two variables instead of  just one in single declaration statement.
To do this,seperate the two variables by a comma in the declaration statement,that is:*/
int feet,fathoms;

//and

int feet;
int fathoms;
//are equivalent

//Multiplication
/*Third,the program makes a calculation.It harnesses the tremendous computational power of a computer system to multiply 
2 by 6.In C,as in many languages,* is the symbol for multiplication.Therefore,the statement:
feet = 6*fathoms;
means "look up the value of the variable fathoms,mulyiply it by 6,and assign the result of this calculation to the variable feet."*/

//Printing Multiple Values
/*Finally,the program makes fancier use of printf().If you compile and run the example,the output should look like this:
There are 12 feet in 2 fathoms!
Yes,I said 12 feet!
This time,the code made two substitutions in the first use of printf(),The first %d in the quotes was replaced by the value
of the first variable(feet) in the list following the quoted segment,and the second %d was repalce by the value of the second
variable (fathoms) in the list.Note that the list of variables to be printed comes at the tail end of the statement after the quoted part.
Also note that each item is separated from others  by a comma.*/
/*The second use of printf() illustrates that the value printed doesn't have to be a variable,it just has to be something,
such as 6*fathoms,that reduces to a value of the right type.*/
/*This program is limited in scope,but it could form the nucleus of a program for converting fathoms to feet.
All that is needed is a way to assign additional values to feet interactively. */

