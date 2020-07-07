/*Integer Overflow
What happens if an integer tries to get too big for its type?  
*/
//toobig.c -- exceeds maximum int size on our system.
#include<stdio.h>
int main(void)
{
    int  i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n",i,i+1,i+2);
    printf("%u %u %u\n",j,j+1,j+2); //use the %u specifier to display unsigned int values.

    return 0;
}
/*The result:
            2147483647 -2147483648 -2147483647
            4294967295 0 1
*/

