/*1# write a proagam that uses one printf() call to print your first name and last name on one line,uses a second 
printf() call to print your first and last names on two separate lines,and uses a pair of printf() call to print your 
first and last names on one lien.The output should look like this(but use your name):*/
/*
Gustav Mahler <---Fisrt  print statement
Gustav        <---Second  print statement
Mahler        <---Still the second  print statement
Gustav Mahler <---Third and fourth print statements
*/
#include<stdio.h>
int main(void)
{
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler\n");
    
    return 0;
}