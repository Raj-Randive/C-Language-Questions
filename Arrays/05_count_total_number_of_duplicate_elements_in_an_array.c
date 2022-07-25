#include <stdio.h>

int main()
{
    int n, duplicate;
    printf("\nInput the number of elements to be stored in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Input 3 elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    int count=0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j] )
            {
                count ++;
                break;
            }   
        }
    }

    printf("Total number of duplicate elements found in the array is : %d", count);

    return 0;
}