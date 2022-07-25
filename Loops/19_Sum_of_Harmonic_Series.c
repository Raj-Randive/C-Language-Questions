#include<stdio.h>

int main()
{
    int r, terms;
    float sum=0;

    printf("Enter the number of terms you want to find sum of : ");
    scanf("%d", &r);

    for (int i = 1; i <= r ; i++)
    {
        if (i<r)
        { printf("1/%d + ", i); }
        
        else
        { printf("1/%d ", i); }
        
        sum = sum + (1/(float)i);
    }


    printf("\n\nSum of Series upto %d terms is : %f ",r, sum);
    printf("\n\n");
    return 0;
}