#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput 3 elements in the array : \n");

    long sum=0;
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("\nSum of all elements stored in the array is : %ld", sum);
    return 0;
}