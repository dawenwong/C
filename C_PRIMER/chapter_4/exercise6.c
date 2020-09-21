/*
Write a program that requests the user's first name and then the user's last name.Have it print
the entered names on one line and the number of letters in each name on the following line.Align
each letter count with the end of the corresponding name,as the following :
    Melissa Honeybee
          7        8
Next,have it print the same information ,but with the counts aligned with beginning  of each name 
    Melissa Honeybee
    7       8
*/
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char fname[40];
    char lname[40];
    int length_first;
    int length_last;

    printf("What's your first name?\n");
    scanf("%s",fname);
    printf("And what's your last name?\n");
    scanf("%s",lname);

    length_first = strlen(fname);
    length_last = strlen(lname);

    printf("%s %s\n",fname,lname);
    printf("%*d %*d\n",length_first,length_first,length_last,length_last);
    printf("%s %s\n",fname,lname);
    printf("%-*d %-*d",length_first,length_first,length_last,length_last);
    return 0;
}
