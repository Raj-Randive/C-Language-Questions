#include <stdio.h>

int main()
{
    int x;
    printf("\nEnter the number you want the multiplication Table of : ");
    scanf("%d", &x);

    printf("\nThe multiplication table of %d is : \n", x);

    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n", x, i, x*i);
    }

    return 0;
}