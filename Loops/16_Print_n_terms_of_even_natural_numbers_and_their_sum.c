#include <stdio.h>

int main()
{
    int r, num, sum=0;
    printf("Enter how many even numbers you want to print : ");
    scanf("%d", &r);
    printf("\nThe %d Even numbers are : \n\n",r);

    num = r + r;

    for (int i = 1; i <= num; i++)
    {
        if (i%2 == 0)
        {
            printf("%d  ", i);
            sum=sum+i;
        }
        
    }
    
    printf("\n\nThe sum of %d even numbers is : %d\n\n",r, sum);
    return 0;
}