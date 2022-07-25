// 26.	Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.  

#include <stdio.h>
#include <math.h>

int main()
{
    long int r, n, term = 1;
    int sum = 0;
    
    printf("Enter the number of terms you want : ");
    scanf("%ld", &n);
    printf("\n\n");

    for (long int i = 1; i <= n ; i++)
    {
        printf("%ld  ", term);
        sum = (sum + term);

        term = (term*10) + 1;
    }
    
    printf("\n\nThe Sum of series upto %d terms is : %d",n, sum );

    return 0;
}