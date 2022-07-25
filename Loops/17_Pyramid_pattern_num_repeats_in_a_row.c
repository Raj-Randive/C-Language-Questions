#include<stdio.h>

int main()
{
    int r;

    printf("\n\nYou are going to see an Number pattern (like a Pyramid)....!!\n\n"); 
    printf("Enter the number of rows you want in the pattern : ");
    scanf("%d", &r);
    
    for (int i = 1; i <= r; i++)
    {
            for (int space = 1; space <= r-i ; space++)
            {
               printf(" "); 
            }
            
            for (int k = 1; k <= i; k++)
            {
                printf("%d ", i);
            }
            printf("\n");
    }
    

    return 0;
}