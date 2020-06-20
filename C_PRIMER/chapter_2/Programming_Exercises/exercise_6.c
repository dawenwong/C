/*Write a program that creates an integer variable call toes,Have the program set toes to 10.Also have the program
calculate what twice toes is and what toes squared is.The program should print all three values,indentifying them.*/
#include<stdio.h>
int main(void)
{
    int toes;
    toes = 10;

    printf("toes = %d\n",toes);
    printf("Twice toes = %d\n",2*toes);
    printf("toes squared = %d\n",toes*toes);

    return 0;
}
