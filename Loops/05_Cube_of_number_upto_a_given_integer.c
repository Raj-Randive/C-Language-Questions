#include <stdio.h>

int main()
{
    int a, x, cube;
    printf("Enter the number upto which you want to print the cube of : ");
    scanf("%d", &a);

    printf("The cubes of first %d numbers is : \n\n", a);

    for (int i = 1; i <=a ; i++)
    {
        printf("Number is : %d and the cube of the %d is : %d \n", i, i, i*i*i);
    }
    

    printf("\n\n");
    return 0;
}