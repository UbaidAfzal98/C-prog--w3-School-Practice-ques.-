/*Write a C program to reverse and print a given number.
Input a number:
The original number = 234
The reverse of the said number = 432*/

#include<stdio.h>

int main()
{
    int n,a,r_n = 0;

    printf("Input a number: ");
    scanf("%d",&n);

    printf("The original number = %d\n",n);

    while (n >= 1)
    {
        a = n % 10;
        r_n = r_n * 10 + a;
        n = n / 10;

        /*x = num % 10;: This line extracts the last digit of num using the modulo operator %. It calculates the remainder when num is divided by 10.

        r_num = r_num * 10 + x;: This line updates the reversed number (r_num) by multiplying it by 10 and then adding the extracted digit (x). This effectively adds the last digit to the reversed number in the next decimal place.

        num = num / 10;: This line removes the last digit from the original number num by dividing it by 10. This is because we've already processed the last digit, and we move on to the next digit in the next iteration.
        
        The loop continues until the original number num becomes less than 1. At the end of the loop, r_num contains the reversed order of digits of the original number.
        
        Keep in mind that the code assumes num is a positive integer. If num could be a decimal or negative, additional checks and modifications would be needed.*/
    }

    printf("The reverse of the said number = %d",r_n);

    return 0;
    
}