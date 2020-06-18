/*Multiple Functions
Incorporate a function of your own --besides main()--into a program*/
//* two_func.c--a program using two functions in one file 
#include<stdio.h>
void butler(void);  //ANSI/ISO C function prototyping
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes.Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)  //start a function definition
{
    printf("You rang,sir?\n");
}
/*The butler() function appear three times in this program.The first appearance is in the prototype,which informs the
compiler about the functions to be used.The second appearance is in main() in the form of a function call.Finally,the program
presents the function definition,which is the source code for the function self.Let's look at each of these appearances in turn */

/*The C90 standard added prototypes,and the older compilers might not recognize them.A prototype declares to the compiler
tahr you are using a particular function,so it's called function declaration.It also specifies properties of the functions.
For example,the first void in the prototype for the butler() function indicates that butler() does not have a return value
(In general,a function can return a value to the calling function for its use,but butler() doesn't).The second void-
the one in butler(void)--mean that the butler()function has no arguments.Therefore,when the compiler reaches the point
in main() where butler() is used,it can check to see whether butler() is used correctly.Note that void is used to mean"empty",
not "invalid"*/
/*Older C supported a more limited form of function declaration in which you just specified the return type but omitted 
describing the arguments:
void butler();
Older C code uses function declaration like the preceding one instead of function prototypes.The C90,C99,and C11 standards
recognize this older form but indicate it will be phased out in time,so don't use it.If you inherit some legacy C code,you may 
want to convert the old-style declarations to prototype.*/
/*Next,you invoke butler() in main() simply by giving its name,including parentheses.When butler() finishes its work,
the program moves to the next statement in main().*/
/*Finally,the function butler() is defined in the same manner as main(),with function header and the body enclosed in braces.
The header repeats the information given in the prototype:butler() takes no arguments and no return value.The older compiler
omit the second void.*/
/*One point to note is that it is the location of the butler() call in main()--not that location of the butler() 
definition in the file--that detemines when butler() function is executed.Remenber,all C program begin execution with mian()
,no matter where main() is located in the program files.However,the usual C practice is to list main() first because
it normally provides the basic framework for a program.*/
/*The C standard recommends that you provide function prototypes for all functions you use.The standard include files
take care of this task for the standard library functions.For example,under standard C,the stdio.h file has a functions
prototype for printf().*/