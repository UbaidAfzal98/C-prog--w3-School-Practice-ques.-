/* Write a C program that accepts the principle, rate of interest, and time and calculates simple interest.
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000*/

#include<stdio.h>

int main() 
{
    float p,t,r;

    printf("Enter the Principle amount \n");
    scanf("%f",&p);
    printf("Enter the rate of intrest in percentage \n");
    scanf("%f",&t);
    printf("Enter the time in years \n");
    scanf("%f",&r);

    printf("The Simple Intrest is %0.2f",(p*t*r)/100);

    /*Simple interest formula is given as:
    SI = PTR/100;
    Where SI = simple interest
    P = principal
    R = interest rate (in percentage)
    T = time duration (in years)
    
    In order to calculate the total amount, the following formula is used:
    Amount (A) = Principal (P) + Interest (I)
    
    The total amount formula in case of simple interest can also be written as:
    A = P(1 + RT)

    Simple Interest for n months = (P × n × R)/ (12 ×100) n = number of days
    
    Simple Interest for days(P × d × R)/ (365 ×100) d = number of days*/

    return 0;

}