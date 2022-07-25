#include <stdio.h>

int main()
{
    int r, factorial=1;
    printf("Enter the number you want the factorial of : ");
    scanf("%d", &r);

    for (int i = 2; i <=r ; i++)
    {
        factorial = factorial*i;
    }

    printf("The factorial of %d is : %d ",r , factorial);

    return 0;
}