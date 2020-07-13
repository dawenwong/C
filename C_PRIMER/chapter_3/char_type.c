/*Character Constants and Initialization
Suppose you want to initialize a character constant to the letter A.Computer languages are supposed to make things
easy,so you shouldn't have to memorize the ASCII code,and you don't.You can assign the character A to grade with 
the following initialization:*/

char grade = 'A'; //A single character contained between single quotes is a C character constant.

/*When the compiler sees 'A',it converts the 'A' to the proper code value.The single quotes are essential.Here's 
another example:*/
char broiled ;     //declare a char variable
broiled = 'T' ;   //it's oK
broiled = T ;    // NO!Thinks T is a variable
broiled = "T" ; //  NO!Thinks "T" is a string 

/*If you omit the quotes,the compiler thinks that T is the name of variable.if you use double quotes,it thinks you
are using a string.We'll discuss string in next Charpter.*/
/*Because characters are really stored as numeric values,you can also use the numerical code to assign values.*/
char grade = 65;  //OK for ASCII,but poor style

/*somewhat oddly,C treats character constants as type int rather than type char.For example,on an ASCII system
with 32-bit int and an 8-bit char,the code*/
char grade = 'B';
/*represents 'B' as the numerical value 66 stored in the 32-bit unit,but grade winds up 66 stored in an 
8-bit unit.This characteristic of character constants makes it possible to define a character constant such as 
'FATE',with four separate 8-bit ASCII codes stored in a 32-bit unit.However,attempting to assign such a character
constants to a char variabale results is only the last 8 bits being used,so the variable gets the value 'E'.*/
