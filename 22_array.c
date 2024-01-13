/*Write a C program that reads and prints the elements of an array of length 7. Before printing, replace every negative number, zero, with 100.
Test Data:
Input the 5 members of the array:
25
45
35
65
15
Expected Output:
Array values are:
n[0] = 25
n[1] = 45
n[2] = 35
n[3] = 65
n[4] = 15*/

// #include<stdio.h>

// int main() 
// {
//     int arr[5],n;

//     printf("Input the 5 members of the array:\n");
//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d",&n);

//         if(n > 0)
//         {
//          arr[i] = n;   
//         }

//         else 
//         {
//             arr[i] = 100;
//         }

//     }


//     printf("Array values are:\n");
//     for(int i = 0; i < 5; i++)
//     {
//         printf("n[%d] = %d\n",i,arr[i]);
//     }

//     return 0;
// }

/*Write a C program to read and print the elements of an array with length 7. Before printing, insert the triple of the previous position, starting from the second position.
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
Test Data:
Input the first number of the array: 5
Expected Output:
n[0] = 5
n[1] = 15
n[2] = 45
n[3] = 135
n[4] = 405*/

// #include<stdio.h>

// int main()
// {
//     int arr[7],n;

//     printf("Input the first number of the array: ");
//     scanf("%d",&n);

//     for(int i =0; i < 5; i++)
//     {
//         arr[i] = n;
//         n = 3*n;
//     }

//     for(int i =0; i < 5; i++)
//     {
//         printf("n[%d] = %d\n",i,arr[i]);
//     }

//     return 0;
// }

/*Write a C program to read an array of length 5 and print the position and value of the array elements of value less than 5.
Test Data:
Input the 5 members of the array:
15
25
4
35
40
Expected Output:
A[2] = 4.0*/

// #include <stdio.h>
// #define AL 5  // Define the size of the array as 5
// #define MAX 5 // Define a maximum value for comparison

// int main() {
//     float N[AL]; // Declare an array of size 5 to hold floating-point numbers
//     int i;
    
//     // Prompt for user input
//     printf("Input the 5 members of the array:\n");
    
//     // Read and store user input into the array
//     for(i = 0; i < AL; i++) {
//         scanf("%f", &N[i]);
//     }
    
//     // Iterate through the array and print elements less than MAX
//     for(i = 0; i < AL; i++) {
//         if(N[i] < MAX) {
//             printf("A[%d] = %.1f\n", i, N[i]);
//         }
//     }
    
//     return 0;
// }


/*Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array.
Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15*/

// #include<stdio.h>
// int main() {
//     int i,n,arr[7];
    
//     printf("Enter How many Numbers you want to print (Max 7 and Min 2)  \n");
//     scanf("%d",&n);

//     printf("Input the %d members of the array:\n",n);
//     for(i=0;i<n;i++) 
//     {
//         printf("arr[%d] =  ",i+1);
//         scanf("%d",&arr[i]);
//     }

    
//     printf("Expected Output:\n");
//     for(i=n-1;i>=0;i--)     // Main thing to reverse the array
//     {
//         printf("arr[%d] = %d\n",i+1,arr[i]);
//     }

//     return 0;
// }


/*Write a C program to read an array of length 6 and find the smallest element and its position.
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3*/

// #include<stdio.h>

// int main() 
// {
//     int i,n,arr[100];
    
//     printf("Enter How many Numbers you want to print) \n");
//     scanf("%d",&n);

//     printf("***************************************************************************\n");
//     printf("Input the %d members of the array:\n",n);

//     for(i=0;i<n;i++) 
//     {
//         printf("arr[%d] =  ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     int sval = arr[0];
//     int position = 0;

//     for(i = 0; i< n; i++)
//     {
//         if(sval < arr[i]) 
//         {
//             sval = arr[i];
//             position = i;
//         }
//     }

//     printf("Smallest Value: %d\n",sval);
//     printf("Position of the element: %d",position);

//     return 0;

// }

/*Write a C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers.
Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380*/

// #include<stdio.h>

// int main()
// {
//     float arr[100],n;
    
//     printf("Input the size of Numbers: ");
//     scanf("%f",&n);

//     printf("Input any %0.1f Numbers\n",n);

//     for(int i = 0; i < n; i++)
//     {
//         scanf("%f",&arr[i]);
//     }

//     float min = arr[0];
//     float max = arr[0];

//     for(int i = 1; i < n; i++)
//     {
//         if(arr[i] < min )          // To Find the minimum value of an array
//         {
//             min = arr[i];
//         }

//         if(arr[i] > max )          // To find the maximum value of an array
//         {
//             max = arr[i];
//         }
//     }

//     printf("The Mimimum Value of an array is: %0.4f\n",min);
//     printf("The Maximum Value of an array is: %0.4f\n",max);
//     printf("The Differnce Between Maximum and Minimum is: %0.4f",max-min);

//     return 0;
// }


/*Write a C program that accepts integers from the user until a zero or a negative number, displays the number of positive values, the minimum value, the maximum value, and the average value.
Input a positive integer:
Input next positive integer: 15
Input next positive integer: 25
Input next positive integer: 37
Input next positive integer: 43
Number of positive values entered is 4
Maximum value entered is 43
Minimum value entered is 15
Average value is 30.0000*/

// #include<stdio.h>

// int main()
// {
//     float arr[100],n;
    
//     printf("Input the size of Numbers: ");
//     scanf("%f",&n);

//     if(n <= 0)
//     {
//         printf("No positvie Number\n");

//         return 0;
//     }

//     printf("Input any %0.1f  positive Integers\n",n);

//     for(int i = 0; i < n; i++)
//     {
//         scanf("%f",&arr[i]);
//     }

//     float min = arr[0];
//     float max = arr[0];
//     float sum = 0;
//     int count;


//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] < min )          // To Find the minimum value of an array
//         {
//             min = arr[i];
//         }

//         if(arr[i] > max )          // To find the maximum value of an array
//         {
//             max = arr[i];
//         }

//         sum += arr[i];                  // To find the sum of an array

//         count++;
//     }

//     printf("Number of positive values entered is %d \n",count);
//     printf("Minimum value entered is %0.4f\n",min);
//     printf("Maximum value entered is  %0.4f\n",max);
//     printf("Average value is %0.4f",sum/n);

//     return 0;
// }


