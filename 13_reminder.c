/*Write a C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.
Test Data :
Input an integer: 25
Expected Output:
3
28
53
78*/

// #include<stdio.h>

// int main() {

//     int arr[100],n;

//         printf("Input an integer:  ");
//         scanf("%d",&n);

//     for (int i = 0; i < 100; i++) {
//     arr[i] = i + 1;
//     }

//     for(int i=0; i<100; i++) {
//         if(arr[i]%n == 3) {
//         printf("%d \n",arr[i]);
//         }
//     }

//     return 0;

// }


/*Write a C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.
Test Data :
Input the first integer: 25
Input the second integer: 45
Expected Output:
30
31
37
38
44*/

#include<stdio.h>
int main() {

    int x,y;

    printf("Input the first integer: ");
    scanf("%d",&x);
    printf("Input the second integer: ");
    scanf("%d",&y);

    if(x>y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;

    }
    
    for(int i=x; i<=y; i++) 
    {
        if(i%7 == 2 || i%7 == 3 )
        {
            printf("%d\n",i);
        }   
    }

    return 0;

}