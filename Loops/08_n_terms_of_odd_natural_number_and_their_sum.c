#include<stdio.h>

int main()
{
    int r,sum=0;

    printf("Enter how many odd numbers you want to print : ");
    scanf("%d", &r);
    printf("The %d Odd numbers are : \n", r);

    int k=r+r;

    for (int i = 0; i<=k ; i++)
    {
        if (i%2 != 0)
        {
            printf("%d  ", i);
            sum = sum + i;
        }
        
    }

    printf("\n\nThe Sum of 1st %d Odd Numbers is : %d\n\n", r, sum);
    
    return 0;
}