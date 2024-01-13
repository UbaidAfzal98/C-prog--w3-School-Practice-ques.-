/*Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches*/
#include<stdio.h>

int main() {

    int l,b;
     printf("Enter the Value of Length of the rectangle\n");
     scanf("%d",&l);
     printf("Enter the Value of Length of the rectangle\n");
     scanf("%d",&b);

     printf("The are of Rectangle is %d \n",l*b);
     printf("The Perimeter of Rectangle is %d \n",2*(l+b));

     return 0;
}