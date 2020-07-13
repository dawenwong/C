/*The single-quote technique is fine for character,digits,and punctuation marks.But some of the ASCII characters
are nonprinting.For example,some represent actions such as backspacing or going to the next line or making the 
terminal bell ring (or speaker beep).How can these be represented.C offers three ways*/
//The first way,just use the ASCII code.For example,the ASCII value for beep character is 7,so you can do this:
char beep =7;

/*The second way to represent certain awkward character in C is to use special symbol sequences.These are called 
escape sequences.*/
/*
           Sequences                                  Meaning
           \a                                         Alert(ANSI C)
           \b                                         Backspace
           \f                                         Form feed
           \n                                         Newline
           \r                                         Carriage return
           \t                                         Horizontal tab
           \v                                         Vertical tab
           \\                                         Backslash(\)
           \'                                         Single quote(')
           \"                                         Double quote(")
           \?                                         Question Mark(?)
           \0oo                                       Octal value(o represents an octal digit)
           \xhh                                       Hexadecimal value(h represents a hexadecimal digit)
*/
/*Escape sequences must be enclosed in single quotes when assigned to a character variable.For example,you could 
make the statement*/
char nerf = '\n';
/*and then print the variable nerf to advance the printer or screen one line.

*/