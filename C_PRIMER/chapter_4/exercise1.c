/* Write a program that asks your first name,your last name,and prints the names in the format 
last,firts.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char fname[40];
    char lname[40];

    printf("Enter your first name: ");
    scanf("%s",fname);
    printf("Enter your last name: ");
    scanf("%s",lname);
    printf("%s, %s\n",lname,fname);
    return 0;
}
