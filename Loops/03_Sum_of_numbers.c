#include <stdio.h>

int main()
{
    
    int a, sum=0;
    printf("Enter the number upto which you want to print the sum :  ");
    scanf("%d", &a);

    printf("The first %d natural numbers are : ", a);

    for (int i = 1; i <=a; i++)
    {
        printf("%d  ", i);
        sum = sum+i;
    }
    
    printf("\nThe Sum of Natural Numbers upto %d is : %d", a, sum);

    return 0;
}