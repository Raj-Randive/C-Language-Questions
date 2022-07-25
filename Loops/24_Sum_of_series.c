#include <stdio.h>
#include <math.h>
int main()
{
    float x, term, final_term;
    int i, n, odd = 1, sum = 0;
    printf("\n\nThe Equation series is : [ x - x^3 + x^5 + ........ ]");
    printf("\n\nInput the value of x : ");
    scanf("%f", &x);
    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("The Value of series are : \n");

    for (i = 1; i <= n; i++)
    {
        term = pow(x,odd);
        odd = odd + 2;

        if (i%2 == 0)
        {
             final_term = term*(-1);
        }
        
        else
        {
            final_term = term;
        }
        sum = sum + final_term ;
        printf("%d\n", (signed int)final_term);
        
    }

    printf("\nThe sum is : %d\n\n\n", sum);

    return 0;
}