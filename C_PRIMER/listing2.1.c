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
