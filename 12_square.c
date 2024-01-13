/*Write a C program to find and print the square of all the even values from 1 to a specified value.
Test Data :
List of square of each one of the even values from 1 to a 4 :
Expected Output:
2^2 = 4
4^2 = 16*/

#include<stdio.h>

int main() {

    int arr[6];      // 6 Numbers from user 

    for(int i=0; i<6;i++) {
        printf("Inpur the %d Number: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<6; i++) {
        if(arr[i]%2 == 0) {
        printf("%d^%d = %d \n",arr[i],arr[i],arr[i]*arr[i]); //Square of Even Numbers 

        }


    }

}    
