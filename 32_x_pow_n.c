#include<stdio.h>
#include<math.h>

int main()
{
    float x,n,y;

    printf("************The Equation y = x^n************\n");
    printf("Input the value of x :");
    scanf("%f",&x);
    printf("Input the value of n :");
    scanf("%f",&n);

    y = pow(x,n);

    printf("The Value of y = %0.2f",y);

    return 0;
    
}