/*Write a C program to remove any negative sign in front of a number.
Input a value (negative):
Original value = -253
Absolute value = 253*/

// #include<stdio.h>

// int main()
// {
//     int n;

//     printf("Input a value (negative): ");
//     scanf("%d",&n);
    

//     if(n < 0)
//     {
//         printf("Original value = %d\n",n);
//         printf("Absalute value = %d",(n * -1));
//     }
//     else 
//     {
//         printf("Enter a negative number");
//     }

//     return 0;
// }

//lets done the same problem with function

#include<stdio.h>

int abs_val(int);

int main()
{
    int x;

    printf("Input a value (negative): ");
    scanf("%d",&x);

    abs_val(x);

}

int abs_val(int n)
{
    if(n < 0) 
    {
        printf("Original value = %d\n",n);
        printf("Absalute value = %d",(n * -1));
    }

    else
    {
        printf("Enter a negatvne Number\n");
    }

    return 0;
}