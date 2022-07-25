// 29.	Write a C program to check whether a given number is an armstrong number or not.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalnum, remainder, sum = 0;
    printf("\n\nEnter the number you want to check whether it is an \"Armstrong Number\" or not : ");
    scanf("%d", &num);

    originalnum = num;

    while (originalnum != 0)
    {
        remainder = originalnum % 10; // Remainder conatins the last number...

        sum = sum + (pow(remainder, 3));

        originalnum = originalnum / 10; // Removing last digit from the number...
    }

    if (sum == num)
    {
        printf("\n\n%d is an \"Armstrong Number.\"\n\n", num);
    }
    else
    {
        printf("%d is not an \"Armstrong Number\"\n\n", num);
    }

    return 0;
}