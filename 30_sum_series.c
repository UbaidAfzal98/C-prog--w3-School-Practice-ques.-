/*Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n.
Input any number: 1 + 1/0
Sum = 1/0*/

// #include<stdio.h>

// int main()
// {
//     float n;

//     printf("Input any number: ");
//     scanf("%f",&n);

//     float sum = 1;

//     for(int i = 1; i < n; i++) 
//     {
//         sum += 1.0/ i;
//     }

//     printf("Sum = %0.2f",sum);

//     return 0;
// }


/*Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 1^4 + 2^4 + 4^4 + 7^4 + 11^4 + • • • + m^4. In this case, m is less than or equal to n. Print an appropriate message.
Input a positive number less than 100: 68
Sum of the series is 37361622*/

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int term = 0, sum = 0;


    printf("Input any number: ");
    scanf("%d",&n);

    if(n < 0 || n > 99)
    {
        printf("Error!");
    }

    else
    {
        for (int i = 1; i <= n; ++i) 
        {
            term += pow(i,4);
            sum += term;             
        } 
    }

    printf("Sum of the series is %d",sum);

    return 0;
}