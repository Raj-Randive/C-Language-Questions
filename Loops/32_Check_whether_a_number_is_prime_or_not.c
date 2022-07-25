// 32.	Write a C program to determine whether a given number is prime or not.  

#include <stdio.h>

int main()
{
    int r, i, Value=0;
    printf("Enter the number you want find if it os Prime or Not : ");
    scanf("%d", &r);

        // 0 and 1 are not prime numbers
        // "Value = 1" is for the numbers which are NOT PRIME NUMBERS
        if (r == 0 || r == 1)
        Value = 1;

    for (i = 2; i <= (r/2); i++)
    { 
        // if r is divisible by i, then r is not prime
        // So put its "Value = 1"...."Value = 1" is for Non Prime Numbers...
        if (r%i == 0)
        {
            Value = 1;
        }
        
        
    }

    // "Value = 0" is For the numbers Which are PRIME NUMBERS...
    
        if (Value == 0)
        {  printf("%d is a Prime Number", r); }
        else
        { printf("%d is NOT a Prime Number", r); }

    return 0;
}
