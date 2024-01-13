/*Write a C program that swaps two numbers without using a third variable.
Input value for x & y:
Before swapping the value of x & y: 5 7
After swapping the value of x & y: 7 5*/

#include<stdio.h>

int main() 
{
    int x,y;

    printf("Enter the value of x and y\n");
    scanf("%d %d",&x,&y);
    
    printf("Before swapping the value of x & y: %d %d\n",x,y);

    x = x + y;
    y = x -y;
    x = x-y;

    printf("\nAfter swapping the value of x & y: %d %d \n",x,y);
    
    return 0;
}