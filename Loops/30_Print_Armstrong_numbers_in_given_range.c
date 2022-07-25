// 30.	Write a C program to find the Armstrong number for a given range of number.  

#include <stdio.h>
#include <math.h>

int main()
{
    int num, remainder, start, end, originalnum, sum;
    printf("\n\nEnter the starting limit of range : ");
    scanf("%d", &start);
    printf("Enter the Ending limit of range : ");
    scanf("%d", &end);

    printf("\n\nThe Armstrong number in the given range is : ");

    for (int num = start; num <= end ; num++)
    {
        sum = 0;
        originalnum = num;

        while (originalnum !=0)
        {
            remainder = originalnum % 10; // Remainder conatins the last number...

            sum = sum + (pow(remainder, 3));

            originalnum = originalnum / 10; // Removing last digit from the number...
        }

        if (sum == num)
        {
            printf("%d  ", num);
        }
        
    }
    
    printf("\n\n");
    return 0;
}