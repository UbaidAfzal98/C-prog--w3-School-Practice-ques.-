/*Write a C program that finds all the divisors of an integer.
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45*/

#include<stdio.h>

int main() 
{
    int n;

    printf("Input an integer: ");
    scanf("%d",&n);
    printf("All the divisor of %d are\n",n);

    for(int i=1; i<=45; i++)
    {
        if(n % i == 0)
        {
            printf("%d\n",i);
        }
    }
}