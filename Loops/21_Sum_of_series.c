// 21.	Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].  

#include <stdio.h>
#include <math.h>

int main()
{
    long int r, n, term = 9;
    int sum = 0;
    
    printf("Enter the number of terms you want : ");
    scanf("%ld", &n);
    printf("\n\n");

    for (long int i = 1; i <= n ; i++)
    {
        printf("%ld  ", term);
        sum = (sum + term);

        term = (term*10) + 9;
    }
    
    printf("\n\nThe Sum of series upto %d terms is : %d",n, sum);

    return 0;
}