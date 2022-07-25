#include <stdio.h>
int main()
{
    float r, sum, term;
    int i, n;
    printf("\n\nThe Equation series is : [1 + X + X^2/2! + X^3/3! + X^4/4! ......... ], i.e it is the expansion of \"e\".");
    printf("\n\nInput the value of X : ");
    scanf("%f", &r);
    printf("Input number of terms : ");
    scanf("%d", &n);
    sum =1, term = 1;
    for (i = 1; i < n; i++)
    {
        term = term * r / (float)i;
        sum = sum + term;
    }
    printf("\nThe sum is : %f\n\n\n", sum);

    return 0;
}