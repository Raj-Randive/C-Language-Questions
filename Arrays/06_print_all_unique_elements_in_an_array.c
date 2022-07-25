#include <stdio.h>

int main()
{
    int n;
    printf("\nInput the number of elements to be stored in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Input 3 elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("The unique elements found in the array are: ");

    int i, count;

    for (i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j <= n ; j++)
        {
            if (i!=j)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                }   
            } 

        }

        if (count==0)
        {  printf("%d ", arr[i]); }
    }
    printf("\n\n");

    return 0;
}