// 28.	Write a c program to find the perfect numbers within a given number of range.

#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, sum;
    printf("\n\nEnter the Starting range of number : ");
    scanf("%d", &start);
    printf("Enter the Ending range of number : ");
    scanf("%d", &end);

    printf("\n\nThe Perfect Numbers within the given range is : ");

    
    for (int i = start; i <= end; i++)
    {
        sum = 0; //As we want to find the sum of current number and not of all the numbers..
        for (int j = 1; j < i; j++) //Here we can do j<=i as it is always true and it will be added in sum and there will be not single perfect number other than 1 in that case......!!
        {
            if (i%j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}