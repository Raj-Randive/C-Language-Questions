// 33.	Write a C program to display Pascal's triangle.  

#include <stdio.h>

int main()
{
    int rows, number_value;

    printf("Enter the number of rows you want : ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        for (int space = 1; space < rows-i; space++)
        {
            printf(" ");
        }
        
        number_value = 1;
        for (int j = 0; j <= i ; j++)
        {
            printf("%d ", number_value);
            number_value = ( (number_value)*(i-j) / (j+1) ) ;
        }
        printf("\n");
        
    }
    

    return 0;
}