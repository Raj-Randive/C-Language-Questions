#include <stdio.h>

int main()
{
    int r;
    printf("Enter how many rows you want to print in Floyd's Triangle : ");
    scanf("%d", &r);

    for (int i = 1; i <= r ; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            if(i%2 == 0 && j%2 == 0)
            {
                printf("1 ");
            }

            else if(i%2 != 0 && j%2 != 0)
            {
                printf("1 ");
            }

            else
            {
                printf("0 ");
            }
        }

        printf("\n");
        
    }
    

    return 0;
}