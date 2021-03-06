/* The first.c program */
#include<stdio.h>
int main(void)   /*a simple program*/
{
    int num;     /* define a variable call num*/
    num = 1;     /* assign a value to num    */

    printf("I am a simple ");  /*use the printf() function*/
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n",num);

    return 0;
}
/* Did the output for this grogram briefly flash onscreen and then disappear ? some windowing environments runs
the program in a separate window and then automatically close the window when the program finished.In this case,
you can supply extra code to make the window stay open until you strike a key.One way is to add the following line
before the return statement:
   "getchar()"
This code causes the program to wait for a keystroke,so the window remains open until you press a key */  

/* The example Explained*/
//Pass1:quick synopsis
/* #include<stdio.h>  include another file*/
/*This line tells the compiler to include the information found in the file "stdio.h" ,which is a standard part 
of all c compiler packages;this file provides support for keyboard input and for displaying output.*/
/*int main(void) a function name*/
/*C program consist of one or more functions,the basic modules of a C program.This program consists of one 
function called main().The parentheses identify main() as a function name.The int indicates that the main() function
renturns an integer,and the void indicates that the main() doesn't take any arguments.*/
// /*a simple program  a comment*/
/*The symbols /* and */ /*enclose comments -remarks that help clarify a program .They are intended for the reader 
only and ignored by the compiler.*/
/* {  beginning of the body of the function*/
/*int num */ /*a declaration statement*/
/* This statement announces that you are using variable called num and that num will be an int(integer) type*/
/*num = 1*/
/* an assignment statement.The assignment num = 1,assigns the value 1 to the variable called num*/
/*printf("I am a simple ")*/
/*a function call statement.The first statement using printf() displays the phrase I am a simple on your screen,
leaving the cursor on the same line.Here printf() is part of the standard C library.It's termed function,and using 
a function in the program is termed calling a function.*/
/*The \n  is code telling the computer to start a new line -that is,to move the cursor to the beginning of the next line*/
/*printf("My favorite number is %d because it is first.\n",num); .The last use of printf() prints the value of num
(which is 1) embedded in the phrase in quotes.The %d instructs the computer where and in what form to print the value of num*/
/*return 0;*/
/*A C function can furnish, or return,a number to the agency that used it.For the  present,just regard this line 
as the appropriate closing for a main() funciton*/

/*pass 2:Program Details*/
/*# include directives and Header Files*/
//include<stdio.h>
/* This is the line that begins the program.The effect of #include<stdio.h>is the same as if you had typed the entire
contents of the stdio.h file into your file at the point where the #include line appears.In effect,it's a cut-and-paste operation.
include files provide a convenient way to share information that is common to many programs.*/
/*The #include statement is an example of a C preprocessor directive.In general,C compliers perform some preparatory
work on source code before compiling;this is termed preprocessing.*/
/*The stdio.h file is supplied as part of all C compiler packages.It contains  information about input and output functions;
such as printf(),for the complier to use.The name stands for "standard input/output header".C people call a collection of 
information that goes at the top  of a file a header,and C implementations typically come with several header file.*/
/*For the most part,header file contain information used by the compiler to build the final executable program.For example,they
may define constant or indicate the names of functions and how they should be used.But the actual code for a function
is in a library file of precompiled code,not in a header file.The linker component of the compiler takes care of finding 
the library code you need.In short,header files help guide the compiler in putting your program together correctly.*/
/*Declarations*/
/*int num;*/
/*This line from the program is termed declaration statement.The declaration statement is one of C's most important features
.This particular example declares two things.First,somewhere in the functions,you have a variable called num.Second,the int 
proclaims num as integer---that is,a number without a decimal point or fractional part.(int is an example of a data type)
The complier uses this information to arrange for suitable storage space in memory for the num variable.The semicolon is part 
of the statement.*/
/*The word int is a C Keyword indentifying one of the basic C data types.Keywords are the words used to express a language,
and you can't use them for other purposes.For instance,you can't use int as the name of a function or a variable.
In C,all variables must be declared before they are used.This means that you have to provide a lists of all the variables
you use in program and that you have to show which data type each variable is.*/
/*Traditionally,C has required that variables be declared at the beginning of a block with no other kind of statement allowed 
to come before any of the declarations.that is,the body of main() might look like the following:*/
int main()     //traditional rules
{
    int doors;
    int dogs;
    doors = 5;
    dogs = 3;
    //other statements
}
/*C99 and C11 ,following the practice of C++,let you place declarations about anywhere in a block.However,you still must 
declare a variable before its first use.So if your compiler supports this feature,your code can look like the following*/
int main() //current C rules 
{
    //some statements
    int doors;
    doors = 5;   //first use of doors 
    //more statements 
    int dogs;
    dogs = 3;   //first use of dogs 
    //other statements
}
/*Assignment*/
/*num = 1;*/
/*The next program line is an assignment statement,one of the basic operations in C.This particular example means"assign 
 the value 1 to the variable num";line set aside space in computer memory for the variable num,and assignment line stores 
 a value in that location.You can assign num a different value later.Note that the assignment statement assigns a value
 from the right side to the left side. */
/*The printf() function*/
/*The first printf()funcions line is an example of how you call or invoke a functions in C.You need type only the name of 
the function,placing the desired argument(s) within the parentheses.When the program reaches this line,control is truned over to 
the named function(printf() in this case).When the function is finished with whatever it does,control is returned to the 
original(the calling ) function ---main(),in this example*/
/*Placeholder*/
/*The digit 1 was substituted for the symbol group %d when the line was printed,and 1 was the value of the variable num.
The %d is a placeholder to show where the value of num is to be printed.The C version does a little more than this,actually
.The % alerts the program that a veriable is to be printed at that location,and the d tells it to print the variable as 
a decimal(base 10) integer.The printf()function allows several choices for the format of printed variables,include 
hexadeciaml(base 16) integers and numbers with decimal ponits.*/

/*RETURN STATEMENT*/
/*return 0;*/
/*this return statement is the final statement of the program.The int in int main(void) means that the main() function
is supposed to return an integer.The C standard requires that main() behave that way.C functions that return values do so 
with a return statement,which consists of the keyword return,followed by the returned value,followed by a semicolon.If 
you leave out the return statement for main(),the program will return 0 when it reached the closing }.So you can omit the 
return statement at the end of main().However,you can't omit if from other functions,so it's more consistent to use it in main(),too
At this point,you can regard the return statement in main() as something required for logical consistency,but it has a practical
use with some operating systems.*/
/*Making programs readable*/
/*Choose meaningful variable names and use comments
Another technique involves using blank lines to separate one conceptual section of a function from another
A fourth technique is to use one line per statement.*/

int main(void){int four;four
=
4
;
printf(
    "%d\n",
four
);return 0;}  //This is legitimate,but ugly.

