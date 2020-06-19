// Semantic Errors
/*Semantic errors are errors in meaning.For example,consider the following sentence:Scornful 
derivatives sing greenly.The syntax is fine because adjectives,nouns,verbs,and adverbs are in right palces,
but the sentence doesn't mean anything.In C,you commit a semantic error when you follow the rules of C correctly 
but to an incorrect end.The example has one such error:
n3 = n2 * n2;
Here,n3 is supposed to represent the cube of n,but the code sets it up to be the fourth power of n.The compiler 
does not detect semantic errors,because they don't violate C rules.The compiler has no way to divining your true intentions.
That leaves it to you to find these kinds of errors.One way is to compare what a program does to what you expected it to do. 
*/
//stillbad.c --- a program with its syntax errors fixed
#include<stdio.h>
int main(void)
{
    int n,n2,n3;

    /*this program has a semantic error*/
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d,n squared = %d,n cubed = %d\n",n,n2,n3);

    return 0;
}
/*Its output is this:
n = 5,n squared = 25,n cubed = 625
If you are cube-wise,you'll notice that 625 is the wrong value.The next stage is to track down how you wound up with 
this answer.For example,you probably can spot the error by inspection.In general,however,you need to take a more systematic approach.
one method is to pretend you are the computer and to follow the program steps one by one.Let's try that method now. 
*/
/*The body of the program starts by declaring three variables:n,n2,n3.You can simulate this situation by drawing three boxes and
labeling them with the variable names.Next,the program assigns 5 to n.Simulate that by writing 5 into the n box.
Next,the program multiplies n by n and assigns the result to n2,so look in the n box,see that the value is 5,multiply 5 by 5
to get 25,and place 25 in box n2.To duplicate the next C statement(n3 = n2 * n2),look in n2 and find 25.You multiply 25 bu 25
,get 625,and place it in n3 box.*/
/*Well,perhaps this procedure is overkill for this example,but going through a program step-by-step in this fashion 
is often the best way to see what's happening.*/
