#include<stdio.h>

int main()
{
    int r;

    printf("\n\nYou are going to see an Astrick pattern (like a right angle triangle)....!!\n\n"); 
    printf("Enter the number of rows you want in the pattern : ");
    scanf("%d", &r);
    
    for (int i = 1; i <= r; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    return 0;
}