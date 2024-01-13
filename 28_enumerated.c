/*Write a C program to create enumerated data types for 7 days and display their values in integer constants.
Sun = 0
Mon = 1
Tue = 2
Wed = 3
Thu = 4
Fri = 5
Sat = 6*/

#include<stdio.h>

int main()
{
    enum week {sun,mon,tue,wed,thu,fri,sat};

    printf("Sun = %d\n",sun);
    printf("Mon = %d\n",mon);
    printf("Tue = %d\n",tue);
    printf("Wed = %d\n",wed);
    printf("Thu = %d\n",thu);
    printf("Fri = %d\n",fri);
    printf("Sat = %d\n",sat);

    return 0;
}
