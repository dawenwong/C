//escape.c -- uses escape characters
#include<stdio.h>
int main()
{
    float salary;

    printf("\aEnter your desired monthly salary:");
    printf("$_______\b\b\b\b\b\b\b");
    scanf("%f",&salary);
    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12);
    printf("\rGee!\n");
    return 0;
}
/*Let's walk through this program step by step as it would work under a system in which the escape characters
behave describe.

The first printf() statement sounds the alert signal (prompted by the \a) and them prints the following:
Enter your desired monthly salary:

Because there is no \n at the end of the string,the cursor is left positioned after the colon.The second
printf() statement picks up where the first one stops,so after it is finished ,the screen looks as follows:
Enter your desired monthly salary:$_______

The effect of the seven backspace characters is to move the cursor seven positions to the left.This backs 
the cursor over the seven undersore characters,placing the cursor directly after the dollar sign.Usually,
backspeacing does not erase the characters that are backed over,but some implementations may use destructive
backspacing,negating the point of this little exercise.

At this point,you type your response,say 4000.00.Now the line looks like this:
Enter your desired monthly salary:$4000.00

The characters you type replace the underscore characters,and when you press Enter to enter your reponse,the 
cursor moves to the beginning of the next line.

The third printf() statement output begins with \n\t.The newline character moves the cursor to the beginning 
of the next line.The tab character moves the cursor to the next tab stop on that line,typically,but not necessarily,
to column 9.Then the rest of the string is printed.
Enter your desired monthly salary: $4000.00
    $4000.00 a month is $48000.00 a year.

Because the printf() statement doesn't use the newline character,the cursor remains just after the final period.

The fourth printf() statement begins with \r.This positions the cursor at the beginning of the current line.
Then Gee! is display there,and the \n moves the cursor to the next line.
Enter your desired monthly salary: $4000.00
Gee! $4000.00 a month is $48000.00 a year.
*/