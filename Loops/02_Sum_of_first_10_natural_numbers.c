#include <stdio.h>

int main()
{
    int x=0;
    printf("The first 10 Natural numbers are: \n");
    for (int i = 1; i <=10; i++)
    {
        printf("%d  ", i);
        x=x+i;
    }
    printf("\nAnd the sum of these first 10 natural numbers is: %d", x);

    return 0;
}