#include <stdio.h>

int main()
{
    int a, x, sum=0, n;
    float average;
    start:
    printf("Enter how many numbers you want to input to find sum and average : ");
    scanf("%d", &a);

    printf("Enter %d inputs : \n", a);

    for (int i = 1; i <=a; i++)
    {
        printf("Number %d : ", i);
        scanf("%d", &x);
        sum = sum + x;
    }

    printf("The Sum of %d number you entered is : %d ", a ,sum);

    average = ((float)(sum)/a) ;
    printf("\nThe Average of %d number you entered is : %f ", a ,average);

    printf("\nPress 1 to continue or Press 0 to exit the program : ");
    scanf("%d", &n);

    if(n ==1){
        goto start;
    }

    else if (n == 0 ){
        goto end;
    }

    
end:
    return 0;
}