// 37.	Write a program in C to display the number in reverse order.  

#include <stdio.h>

int main()
{
    int num, remainder, reverse=0;
    printf("\n\nEnter the number you want the reverse of : ");
    scanf("%d", &num);

    while (num !=0)
    {
        remainder = num % 10;
        reverse = reverse*10 + remainder ;
        num = num/10;
    }
    
    printf("\n\nThe Reverse of the given number is : %d\n\n", reverse);

    return 0;
}