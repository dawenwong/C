//Introducing Debugging 
/*Program errors often are called bugs,and finding and fixing the errors is called debugging.*/
// nogood.c--a program with errors
#include<stdio.h>
int main(void)
(
    int n,int n2,int n3;

    /*this program has several errors 
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d,n squared = %d,n cude = %d\n",n,n2,n3)

    return 0;
)
//Syntax Errors
/*nogood.c contains several syntax errors.You commit a syntax error when you don't follow C's rules.It's analogous 
to a grammatical error in english.For instance,consider the following sentence:Bugs frustrate be can.This sentence 
uses valid English words but doesn't follow the rlues for word order.C syntax errors use valid C symbols in wrong places.*/
/*So what syntax errors did nogood.c make?First,it uses parentheses instead of braces to mark the body of the function--
it uses a valid C symbol in the wrong place.Second,the declaration should have been:
int n,n2,n3;
or perhaps
int n;
int n2;
int n3;
Next,the example omit the */ /*symbol  pair necessary to complete a comment.(Alternatively,you could replace 
/* with the new // form).Finally,it omits the mandatory semicolon that should terminate the printf() statement. 
*/ 
/*how do you detect syntax error?First,before compiling ,you look through the source code and see whether you spot 
anything obvious.Second,you can examine errors found by the compiler because part of its job is to detect syntax error.
When you attempt to compile this program,the compiler reports back any errors it finds,identifying the nature and the 
location of each error.*/
/*Hoever,the compiler can get confused.A true syntax error in one location might cause the compiler to mistakenly think
it has found other errors.For instance,because the example does not declare n2 and n3 correctly,the compiler might think
it has found further errors whenever those variable are used*/

