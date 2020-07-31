//prntval.c--finding printf()'s return value
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int bph20 = 212;
    int rv;
    
    rv = printf("%d F is water's boiling point.\n",bph20);
    printf("The printf() function printed %d characters.\n",rv);
    return 0;
}
/*
First,the program used the form rv = printf(...);to assign the return value to rv.This statement 
therefore performs two tasks:printing information and assigning a value to a variable.Second,note 
that the count inculdes all the printed characters,inculding the spaces and the unseen newlien character.

*/