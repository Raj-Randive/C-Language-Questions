// 31.	Write a program in C to display the pattern like a diamond.  

#include <stdio.h>

int main()
{    
    int rows;
    printf("\n\nYou are going to see a Diamond Shape pattern (made of Astrick Mark) ");
    printf("\n\nFor That Enter the number of rows you want (the number of rows will be (2*(entered_number) - 1 ) : ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= (rows-i) ;  space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= ((2*i)-1) ; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    for (int i = rows-1; i >=1 ; i--)
    {
        for (int space = 1; space <= (rows-i) ;  space++)
        {
            printf(" ");
        }

        for (int j = 1; j <= ((2*i)-1) ; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    
    return 0;
}