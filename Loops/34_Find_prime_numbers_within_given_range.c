// 34.	Write a program in C to find the prime numbers within a range of numbers.  

#include <stdio.h>

int main()
{
    int  start, end, value;
    printf("\n\nEnter the Starting value of Range : ");
    scanf("%d", &start);
    printf("Enter the Ending value of Range : ");
    scanf("%d", &end);

    printf("\n\nThe Prime Numbers between %d and %d are : ", start, end);

    for (int i = start; i <= end; i++)
    {
        value=0;
        if (i==0 || i==1)
            {
                value = 1; //Value = 1 is for NON PRIME NUMBERS
            }

        for (int j = 2; j < i; j++)
        {
            

            if (i%j == 0)
            {
                value = 1; //Value = 1 is for NON PRIME NUMBERS
            }
        }

        if (value == 0)
        {
            printf("%d  ", i);
        }
        
    }
    return 0;
}