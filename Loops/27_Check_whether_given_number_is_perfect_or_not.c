// 27.	Write a c program to check whether a given number is a perfect number or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int r ,sum = 0 ;
    printf("\n\nEnter the number you want to check if it is a perfect number or not : ");
    scanf("%d", &r);

    printf("\n\nThe positive divisors are : ");

    for (int i = 1; i <= (r/2); i++)
    {
        if (r%i == 0 )
        {
            sum = sum + i ;
            // or sum += i;
            printf("%d ", i);
        }

    }

    printf("\nThe sum of the divisors is : %d", sum);

    if (sum == r && r>0)
    { printf("\n\nSo, the number is a \"Perfect Number.\"\n\n"); }
    
    else { printf("\n\nThe number you entered is not a Perfect Number.\n\n"); }

    return 0;
}