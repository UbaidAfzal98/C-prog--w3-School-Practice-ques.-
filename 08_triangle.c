/*Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0*/
#include<stdio.h>

int main() {

     float b,p,h,area;

    printf("Input the first number: \n");
    scanf("%f",&b);
    printf("Input the second number: \n");
    scanf("%f",&p);
    printf("Input the Third number: \n");
    scanf("%f",&h);
    
    area=0.5*(b+p);

    if(area == 0) {
        printf("The Given Numbers can not Make a Triangle \n");
    } else {
        printf("Perimeter = %0.1f",b+p+h);
    }

}