/*Write a C program to convert specified days into years, weeks */
// #include<stdio.h>

// int main() {

//     int year,month,weak,days;

//     printf("Enter No of Days \n");
//     scanf("%d",&days);

//     printf("The Years are %d\n",days/365);
//     printf("The weeks are %d\n ",(days%365)/7);

//     return 0;
// }

/*Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Months(s)
15 Day(s)*/

#include<stdio.h>

int main() {

    int y,m,d,ud,diff;

    printf("Input no. of days: ");
    scanf("%d",&ud);

    y = (int)ud/365;
    printf("%d Year(s)\n",y);

    diff = (int)ud - (y*365);

    m = (int)diff/30;
    printf("%d months(s)\n",m);

    d = (int)diff - (m*30);
    printf("%d Day(s)\n",d);

    return 0;
}