/*
Operator precedence

Consider the following line of code:

    butter = 25.0 + 60.0 * n /SCALE;

This statement has an addition,a multiplication,and a division operation.Which operation takes place 
first? Is 25.0 added to 60.0,the result of 85.0 then multiplied by n,and that result then divided by SCALE?
Is it some other order?Let's take n to be 6.0 and SCALE to be 2.0.If you work through the statement using 
these values,you will find that the first apporach yields a value of 255.The second apporach yields 192.5.
A C proagram must have some other order in mind,because it would give a value of 205.0 for butter.

Clearly,the order of executing the various operations can make a difference,so C needs unambiguous rules 
for choosing what to do first.C does this by setting up an operator pecking order.Each operator is assigned 
a precedence level.As in ordinary arithmetic,multiplication and division have a heigher precedence than 
addition and substraction,so they are performed first.What if two operators have the same precedence ?
If they share an operand,they are executed according to the order in which they occur in the statement.For 
most operators,the order is from left to right.(The = operator was an exception to this) Therefore,in the 
statement:
    butter = 25.0 + 60.0 * n /SCALE;

the order of operations is as follows:
    60*n            The first * or / in the expression (assuming n is 6 so that 60.0*n is 360.0)
    360.0/SCALE     Then the second * or / in the expression
    25.0+180.0      Finally(because SCALE is 2.0),the first + or - in the expression,to yield 205.0

What if you want an addition operation to take place before division?Then you can do as we have done 
in the following line:
    flour  = (25.0+60.0*n)/SCALE;

Whatever is enclosed in parentheses is executed first.Within the parentheses,the usual rules hold.For 
this example,first the multiplication takes place and then the addition.That completes the expression 
in the parentheses.Now the result can be divided by SCALE.

Precedence and the order of Evaluation

Operator precedence provides vital rules for determining the order of evaluation in an expression,but it 
doesn't necessarily determine the complete order.C leaves some choices up to the implementation.Consider
the following statement:
    y = 16*12 + 5*20;

Precedence dictates the order of evaluation when two operators share an operand.For example,the 12 is an
operand for both the * and the + operator,the precedence syas that multiplication comes first.Similarly,
precedence says that the 5 is to be multiplied,not added.In short,the multiplications 6*12 and 5*20 take
place before any addition.What precedence does not establish is which of these two multiplications occurs
first.C leaves that choice to the implementation because one choice might be more efficient for one kind
of hardware,but the other choice might work better on another kind of hardware.In either case,the expression
reduces to 72 + 100,so the choice doesn't affect the final value for this particular example."But",you say
,"multiplication associates from left to right.Doesn't that mean the leftmost multiplication is performed 
first?" The association rule applies for operators that share an operand.For instance,in the expression
12/3*2,the / and * operators,which have the same precedence,share the operand 3.Therefore,the left-to-right
 rule applies in this case,and the expression reduces to 4 *2 ,or 8(Going from right to left would give 12/6
 ,or 2.Here the choice does matter.)In the previous example,the two * operators did not share a common
 operand,so the left-to-right rule did nit apply.

*/