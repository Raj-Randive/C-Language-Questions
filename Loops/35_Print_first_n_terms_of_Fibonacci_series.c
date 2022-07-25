// 35.	Write a program in C to display the first n terms of Fibonacci series.  

#include <stdio.h>

int main()
{
    int r, next_term, term1, term2;
    printf("Enter the number of terms you want to display : ");
    scanf("%d", &r);

    printf("Here is the Fibonacci series upto to %d terms : ", r);

    
    term1=0;
    term2=1;

    printf("%d %d ", term1, term2); //Printing 0 and 1 at the Start...

    for (int i = 3; i <= r; i++) //Starting from 3 as 0 and 1 are already printed....
    {
        next_term = term1 + term2;
        printf("%d ", next_term);
        
        term1 = term2;
        term2 = next_term;

    }
    

    return 0;
}