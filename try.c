/*Write a C program that takes an array of integers as input and finds the maximum and minimum values in the array. Print both the maximum and minimum values.*/

#include<stdio.h>

int main()
{
    int arr[50],n;

    printf("Input the size of Numbers: ");
    scanf("%d",&n);

    printf("Input any %d Numbers: ",n);

    for(int i = 0; i < n; i++)
    {
        printf("arr[%d] =  ",i+1);
        scanf("%d",&arr[i]);
    }

    int maximum = arr[0], minimum = arr[0];
    int position1 = 0,position2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(maximum < arr[i] )
        {
            maximum = arr[i];
            position1 = i;
        }
        // else if(minimum < arr[i])
        // {
        //     minimum = arr[i];
        //     // position2 = i;
        // }
    }

    printf("arr[%d] = %d is Maximum\n",position1,maximum);
    // printf("%d is Minimum\n",minimum);

    return 0;
}