/*Write a C program to calculate and print the squares and cubes of the numbers from 0 to 20. It uses tabs to display them in a table of values.
Sample Output:
Number Square Cube
=========================
0 0 0
1 1 1
2 4 8
3 9 27
.....
18 324 5832
19 361 6859
20 400 8000*/

// #include<stdio.h>

// int main()
// {
//     long arr[80];
//     long long square =1 , cube = 1;

//     printf("Squares from 0 to 20 are: \n");

//     for(int i = 0; i <= 20;i++)
//     {
//         square = i * i;

//         if(square % 3 == 0)
//         {
//             printf("\n");
//         }

//         printf("%lld\t",square);
//     }

//     printf("\n\nCubes from 0 to 20 are: \n");

//     for(int i = 0; i <= 20;i++)
//     {
//         cube = i * i * i;

//         if(cube % 3 == 0)
//         {
//             printf("\n");
//         }

//         printf("%lld\t",cube);
//     }

//     return 0;

// }


/* Write a C program using looping to produce the following table of values.
Sample Output:

x       x+2     x+4     x+6
--------------------------------
1       3       5       7
4       6       8       10
7       9       11      13
10      12      14      16
13      15      17      19*/

#include<stdio.h>

int main()
{
    int x;

    printf("X\tX+2\tX+4\tx+6\t\n");
    printf("------------------------------------------------\n");

    for(int i = 1; i <= 15; i += 3)
    {
        printf("%d\t%d\t%d\t%d\t\n",i,i+2,i+4,i+6);
    }
    
    return 0;
}


/*Write a C program to print a table of all the Roman numeral equivalents of decimal numbers in the range 1 to 50.
Sample Output:
Decimal  Roman
number   numeral
-------------------
1        I
2        II
3        III
4        IV
.....
98        LXXXXVIII
99        LXXXXIX
100        C*/
// #include<stdio.h>

// void printRoman(int);

// int main()
// {
//     printf("Decimal\tRoman\nnumber\tnumeral\n");
//     printf("\n-----------------------------------------------\n")
//     for(int i = 1; i <= 50; i++)
//     {
//         printf("%d\t",i);
//         printRoman(i);
//         printf("\n");
//     }
// }

// void printRoman(int x)
// {

//     char *arr1[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
//     int arr2[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

//     for(int i =12; i >= 0; --i)
//     {
//         while (x >= arr2[i])
//         {
//             printf("%s",arr1[i]);
//             x -= arr2[i];
//         }
        
//     }

// }
