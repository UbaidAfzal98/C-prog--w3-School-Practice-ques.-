#include<stdio.h>

int main()
{
    int n,factorial = 1;

    printf("Enter any Number: ");
    scanf("%d",&n);

    if(n < 0)
    {
        printf("Please Enter  Positive Integer \n");
        return 0;
    }

    else 
    {
        for(int i = 1; i <=n; i++)
        {
            factorial *= i;
        }

        printf("The %d! = %d",n,factorial);
    }


    return 0;

}