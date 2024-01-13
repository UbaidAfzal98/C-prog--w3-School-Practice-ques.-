/*Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for correct password print, "Correct password" and quit the program. The correct password is 1234.
Test Data :
Input the password: 1234
Expected Output:
Correct password*/
#include<stdio.h>

int main() {

    int a;


    printf("Input a Password: ");
    scanf("%d",&a);

    if(a == 1234) {
        printf("Correct Password!\n");
    } 
    else {
        printf("Wrong Password!\n");
    }

    return 0;
}