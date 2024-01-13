/*Write a C program to copy a given string into another and count the number of characters copied.
Input a string
Original string: w3resource
Number of characters = 10*/

#include<stdio.h>

int main()
{
    char str1[80];//str2[80];
    int i, count;

    printf("Input a String: ");
    scanf("%s",str1);

    for( i = 0; str1[i] != '\0'; i++ )
    {
        count = i+1  ;                      // this will give the count of the string
        // str1[i] = str2[i];               //Copy the string2 in first string
        // str1[i] = '\0';                  // then colse the first string with null value '\0'
    }

    printf("Original string: %s\n",str1);
    printf("Number of characters = %d",count);

    return 0;
}