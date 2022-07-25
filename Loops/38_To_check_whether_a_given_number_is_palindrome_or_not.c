// 38.	Write a program in C to check whether a number is a palindrome or not.
// Palindrome Number example = 13231

#include <stdio.h>

int main()
{
    int remainder, num, original_num, reverse_num = 0;
    printf("\n\nEnter the number you want to check whether it is a Palindrome or not : ");
    scanf("%d", &num);

    original_num = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse_num = (reverse_num)*10 + remainder;
        num = num / 10;
    }

    if (original_num == reverse_num)
    { printf("\n\n%d is a Palindrome Number.\n\n", original_num); }

    else
    { printf("\n\n%d is NOT a Palindrome Number.\n\n", original_num); }

    return 0;
}