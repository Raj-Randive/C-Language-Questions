#include <stdio.h>

int main()
{
    int r, sum = 0;
    printf("\n\nEnter the number of terms you want : ");
    scanf("%d", &r);

    printf("\nThe terms upto %d terms are : ", r);

    for (int i = 1; i <= r; i++)
    {
        printf("%d  ", i * i);
        sum = sum + (i * i);
    }

    printf("\n\nAnd the sum upto %d terms is : %d \n\n", r, sum);

    return 0;
}