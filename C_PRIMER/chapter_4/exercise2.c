/*
Write a program that requests your first name and does the  following with it:
    a.Prints it enclosed in double quotation marks.
    b.Prints it in a field 20 characters wide,with the whole field in qutoes and the name at the 
    right end of the field.
    c.Prints it at the left end of a field 20 characters wide,with the whole field enclosed in quotes.
    d.Prints it in a field three characters wider than the name.
*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char first_name[20];
    char last_name[20];
    int length_first = 0;
    int length_last = 0;

    length_first = strlen(first_name);
    length_last = strlen(last_name);

    printf("Please enter your first name: \n");
    scanf("%s",first_name);
    printf("Please enter your last name: \n");
    scanf("%s",last_name);
    printf("\"%s %s\"\n",first_name,last_name);
    printf("\"%20s %20s\"\n",first_name,last_name);
    printf("\"%-20s %-20s\"\n",first_name,last_name);
    printf("%*s %*s\n",length_first,first_name,length_last,last_name);
    return 0;
}
