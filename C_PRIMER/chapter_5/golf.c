// golf.c -- golf tournament scorecard
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int jane,tarzan,cheeta;

    cheeta = tarzan = jane = 68;

    printf("                   cheeta    tarzan     jane\n");
    printf("First round score  %4d  %8d   %8d\n",cheeta,tarzan,jane);
    return 0;
}
/*
Many languages would balk at the triple assignment made in this program,but C accepts it routinely.The 
assignments are made right to left:First,jane gets the value 68,and then tarzan does,and finally cheeta 
does.Therefore,the output is as follows:
*/

/*
Addition Operator:+

The addition operator causes the two values on either side of it to be added together.For example,the 
statement:
    printf("%d",4+20)

causes the number 24 to be printed,not the expression:
    4+20.

The values (operands)to be added can be variables as well as constants.Therefore,the statement:
    income = salary + bribes;

causes the computer to look up the values of the two variables on the right,add them,and then assign this
total to the variable income.

As a reminder,note that income,salary,and bribes all are modifiable lvalues because each identifies a data
object that could be assigned a value,but the expression salary + bribes is an rvalue,a calculated value 
not identified with a particular memory location.

Subtraction Operator:-

The subtraction operator causes the number after the - sign to be subtracted from the number before the sign,
The statement:
    takehome = 224.00 - 24.00

assigns the value 200.0 to takehome.

The + and - operators are termed  binary,or dyadic,operators,meaning that they require two operands.

Sign Operator: - and +
The minus sign can also be used to indicate or to change the algebraic sign of a value.For instance,the 
sequanence:
    rocky  = -12;
    smokey = -rocky;

gives somkey the value 12.

When the minus sign is used in this way,it is called a unary operator,meaning that it takes just one operands.

The C90  standard adds a unary + operator to C.It doesn't alter the value or sign of its operands;iy just 
enables you to use statements such as:
    dozen = +12;
without getting a compiler complaint.Formerly,this construction was not allowed.
*/