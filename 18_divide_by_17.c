/*Write a C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.
Test Data :
Input the first integer: 50 Input the second integer: 99
Expected Output:
Sum: 3521*/

#include<stdio.h>
int main() {

    int x,y,sum = 0; // This Initilization Of Sum is Necesaary other wise sum will prodece garbage value

    printf("Input the first integer: ");
    scanf("%d",&x);
    printf("Input the second integer: ");
    scanf("%d",&y);

    for(int i=x; i<=y; i++) 
    {
        if((i%17) != 0)
        {
            sum +=i; // It Means Sum = Sum + i;
        }   
    }

    printf("Sum: %d",sum);
}