// /*Write a C program to print a number, its square and cube, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
// Test Data :
// Input number of lines: 5
// Expected Output:
// 1 1 1
// 2 4 8
// 3 9 27
// 4 16 64
// 5 25 125*/

// #include<stdio.h>

// int main() {

//     int a,j=1,x = 0;

//     printf("Input number of lines: ");
//     scanf("%d",&a);

//     for(int i=1; i<=a; i++ )
//     {
//         while(x<6)
//         {
//             printf("%d ",j++);      
//             x++;
//         }
//         x=0;

//     printf("%d %d %d\n",i,i*i,i*i*i);
//     }
// }


// /*Write a C program that prints out the prime numbers between 1 and 200. The output should be such that each row contains a maximum of 20 prime numbers.
// Expected output:
// The prime numbers between 1 and 199 are:
// 2 3 5 7 11 13 17 19 23 29
// 31 37 41 43 47 53 59 61 67 71
// 73 79 83 89 97 101 103 107 109 113
// 127 131 137 139 149 151 157 163 167 173
// 179 181 191 193 197*/

// #include <stdio.h>
// int main() {
//     int i, j, flag, ip = 0;

//     // Print a message indicating the purpose of the program
//     printf("The prime numbers between 1 and 199 are:\n");

//     // Loop to check prime numbers from 2 to 198
//     for (i = 2; i < 199; i++) {
//         flag = 1;

//         // Loop to check if i is divisible by any number other than 1 and itself
//         for (j = 2; j <= i / 2 && flag == 1; j++) {
//             if (i % j == 0) {
//                 flag = 0;
//             }
//         }

//         // If i is prime, print it
//         if (flag == 1) {
//             printf("%5d ", i);
//             ip++;

//             // Print a newline character after every 10 prime numbers
//             if (ip % 10 == 0) {
//                 printf("\n");
//             }
//         }
//     }

//     //printf("\n");

//     return 0;
// }
