/*Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
Test Data :
Input the first number: 5
Input the second number: 8
Input the third number: 10
Input the fourth number: -5
Input the fifth number: 25
Expected Output:
Number of positive numbers: 4
Average value of the said positive numbers: 12.00*/

// #include<stdio.h>

// int main() {

//     int arr[5],pos;
//     float sum = 0,avrg;

//     for(int i=0; i<5;i++) {
//         printf("Inpur the %d Number: ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0; i<5; i++) {
//         if(arr[i]>0) {
//             pos++;
//         }
//     }

//         printf("Number of positive numbers: %d\n",pos);

//         for(int i=0; i<5; i++) {
//         if(arr[i]>0) {
//             sum += arr[i];
//         }
//             avrg = sum/pos;
//     }

//         printf("Average value of the said positive numbers:  %0.2f\n",avrg);

//         return 0;

// }