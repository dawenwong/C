/*
C offers many integer types,and you might wonder why one type isn't enough.The answer is that C gives the programmer
the option of matching a type to a particular use.In particular,the C integer types vary in the range of values offered
and in whether negative numbers can be used.The int type is the basic choice,but should you need other choices to meet
requirements of a particular task or machine,they are available.

The int type is a signed integer.That means it must be an integer and it can be positive,negative,or zero.The range 
in possible values depends on the computer system.Typically,an int can uses one machine word for storage.Therefore,
older IBM PC compatibles,which have a 16-bit word,use 16 bits to store an int.This allow a range in values from 
-32768 to 32767 .Current personal computers typically have 32-bit integers and fit an int to that size.Now the personal
computer industry is moving toward 64-bit processors that  naturally will use even larger integers.ISO C specifies that
the minimum range for type int should be from -32768 to 32767.Typically,systems represent signed integers by using 
the value of a particular bit to indicate the sign. 
*/

//Declaring an int Variable
/*First come int,and then the chosen name of varibable,and then a semicolon.To declare more than one variable,you can 
declare each variable separately,or you can follow the int with a list of names in which each name is separated from
the next by a comma.The following are valid declarations:*/
int erns;
int hogs,cows,goat;
/*You could have used a separate declaration for each variable,or you could declared all four variables in the same
statement.The effect is same:Associate names and arrange storage space for four int-size variables
These declarations create variables but don't supply values for them.How do variables get values?
First ,there is assignment: */
cows = 112;
/*Second,a variable can pick up a value from a function---from scanf(),for example,Now let's look at the third way.
*/

//Initializing a Variable
/*To initialize a variable means to assigns it a starting,or initial,value.In C,this can be done as part of the declaration
.Just follow the variable name with the assignment operator(=) and the value you want the variable to have.Here are some
examples:*/
int hogs = 21;
int cows = 32,goats = 14;
int dogs,cats = 94;  /*valid,but poor,form*/
/*In the last line,only cats is initialized.A quick reading might lead you to think that dogs is also initialized 
to 94,so it is best to avoid putting initialized and noninitialized variables in the same declaration statement.*/

//Type int Constants
/*The various integers(21,32,14,94) in the last example are integer constants,also called integer literals.When you 
write a number without a decimal point and without an exponent,C recognizes it as an integer.Therefore,22 and -44 are
integer constants,but 22.0 and 2.2E1 are not.C treat most integer constants as type int.Very large integers can be 
treated differently.*/

//Print int values
/*You can use the printf()function to print int type.As you saw in Chapter 2,the %d notation is used to indicate just 
where in a line the integer is to be printed.The %d is called format specifier because it indicates the form that printf()
uses to display a value.Each %d in the format string must be matched by a  corresponding int value in the list of items
to be printed.That value can be an int variable,an int constant,or any other expression having an int value.It's your job
to make sure the number of format specifier matches the number of values;the compiler won't catch mistakes of that kind.
*/
