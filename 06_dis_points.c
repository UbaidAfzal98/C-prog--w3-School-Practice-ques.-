/*Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803 
Formulla for distance between two points is given by distance=root of{(x2-x1)^2 + (y2-y1)^2}*/

#include<stdio.h>
#include<math.h>

int main() {

    float x1,x2,y1,y2;
    float dis1,dis2,result1,result2,total,totaldis;

    printf("Input x1: ");
    scanf("%f",&x1);
    printf("Input y1: ");
    scanf("%f",&y1);
    printf("Input x2: ");
    scanf("%f",&x2);
    printf("Input y2: ");
    scanf("%f",&y2);

    dis1 = x2-x1;
    dis2 = y2-y1;
    result1 = pow(dis1,2);
    result2 = pow(dis2,2);            
    total = result1 + result2;
    totaldis=pow(total,0.5);

    printf("Distance between the said points: %0.4f",totaldis);

    return 0;    
}
