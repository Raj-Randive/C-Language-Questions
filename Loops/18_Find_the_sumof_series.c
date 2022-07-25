#include <stdio.h>
#include <math.h>

int main()
{
    int  x, n; 
    float term, final_term, sum = 1, factorial = 1;

    printf("\n\nThe Equation series is : 1- X^2/2! + X^4/4! - X^6/6! ......... ");
    printf("\n\nTo calculate the above series with input values : ");
    printf("\n\nEnter the value of x : ");
    scanf("%d", &x);
    printf("Enter the numbers of terms : ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 1; i < n; i++)
    {
        for (int j = (i*2); j >= 1; j--)
        {  factorial = factorial*j;  }

        term = pow(x, (i*2)) / (factorial);

        if (i%2 != 0)
        {  final_term = term*(-1); }
        else
        {  final_term = term*(1); }

        
        sum = sum + (float)final_term;

    }

    printf("The Value(Sum) of the Series is : %f", sum);

    return 0;
}