#include<stdio.h>

int main()
{
    int x,j,i;
    printf("Enter the number upto which you want to print multiplication table of (Starting from 1) : ");
    scanf("%d", &x);

    for (i = 1; i <=10; i++)
    {
        for (j = 1; j <=x; j++)
        {
            printf("%dX%d = %d,  ", j, i, j*i);
        }
        printf("\n");
        
    }
    

    return 0;
}