/*Write a C program that accepts a seven-digit number, separates the number into its individual digits, and prints the digits separated from one another by two spaces each.
Sample Input: 2345678
Input a seven digit number:
Output: 2 3 4 5 6 7 8*/

// #include<stdio.h>

// int main()
// {
//     int n;

//     printf("Input a seven digit number: ");
//     scanf("%d",&n);

//     printf("%d  ",n / 1000000);
//     n = n - ((n / 1000000) * (1000000));

//     printf("%d  ",n / 100000);
//     n = n - ((n / 100000) * (100000));

//     printf("%d  ",n / 10000);
//     n = n - ((n / 10000) * (10000));

//     printf("%d  ",n / 1000);
//     n = n - ((n / 1000) * (1000));

//     printf("%d  ",n / 100);
//     n = n - ((n / 100) * (100));

//     printf("%d  ",n / 10);
//     n = n - ((n / 10) * (10));

//     printf("%d  ",n);

//     return 0;
// }


/*Write a C program that reads a five-digit integer and determines whether or not it's a palindrome.
Sample Input: 33333
Sample Output:

Input a five-digit number: 33333 is a palindrome.*/
// #include<stdio.h>

// int main()
// {
//     int n ,d1 ,d2 ,d3 ,d4 ,d5,d6,d7;         // d represents digits 
//     int pl1,pl2,pl3,pl4,pl5,pl6;           
//     // pl represents places that 10's place mulp. by digit eg 2*10 = 20

//     printf("Input a Five digit number: ");
//     scanf("%d",&n);

//     if(n >= 100000 || n <= 9999 )
//     {
//         printf("Not a five digit Number!");
//     }
//     else
//     {

//         d1 = n / 10000;

//         pl1 = n - ((n / 10000) * (10000));

//         d2 = pl1 / 1000;

//         pl2 = n - ((n / 1000) * (1000));

//         d3 = pl2 / 100;

//         pl3 = n - ((n / 100) * (100));

//         d4 = pl3 / 10;

//         pl4 = n - ((n / 10) * (10));

//         d5 = pl4;

//         if (d5 == d1 && d4 == d2 && d5 == d2)
//         {
//             printf("The Number %d is palidrome",n);
//         }
    
//         else
//         {
//             printf("The Number %d is not palidrome",n);
//         }

//     }

//     return 0;
// }




/*Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number.
Sample Input: 538453
Sample Output:
Input a number: The number of threes in the said number is 2*/

#include<stdio.h>

int count(int);

int main()
{
    int num;
    printf("Input a Number greater than 0 digits or less than 8 digits: ");
    scanf("%d",&num);

    printf("The Number of threes in %d is %d",num,count(num));
}

int count(int x)
{
    int remainder;
    int cnt = 0;
    while(x>0)
    {
        remainder = x % 10;
        x /= 10;

        if(remainder == 3)
        {
            cnt++;
        }
    }

    return cnt;
}