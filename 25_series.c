/*Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
Expected Output:
Value of S: 4.50*/

// #include <stdio.h>

// int main() 
// {
//     float s, sum = 0;

//     for (int i = 1; i <= 50; i++) 
//     {
//         sum += (float)1/i;
//     }

//     printf("Value of S: %0.2f", sum);
//     return 0;
// }


/*Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
Expected Output:
Value of series: 4.62*/

#include <stdio.h>

int main() 
{
    float s, sum = 0,div = 1,j=1;

    for (int i = 1; i<=7 ;i+=2)
 
    {
        
        div = (i/j);
        sum += div;
        j = j*2;    

        // We can aslo done this with the help of bit wise operator
        // sum += (float)i / (1 << (i / 2)); 
    }

    printf("Value of S: %0.2f", sum);
    return 0;
}