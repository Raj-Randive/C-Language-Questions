// 36.	Write a program in C to display the such a pattern for n number of rows using a number which will start with the number 1 and the first and a last number of each row will be 1.

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows you want : ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        // Loop for space
        for (int space = 1; space <= rows-i; space++)
        {  printf(" ");  }
        
        // 1st half triangle
        for (int j = 1; j <= i; j++)
        {  printf("%d",j); }
        
        //2nd half triangle
        for (int k = (i-1); k >=1 ; k--)
        {
            printf("%d", k);
        }
        
    printf("\n");
        
    }
    

    return 0;
}