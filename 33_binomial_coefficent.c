#include<stdio.h>

int main()
{
    int n,k;
    long long factorial_n = 1,factorial_k = 1,factorial_sub = 1;
    long long b_coefficent = 0;
    long sub;

    printf("********The Binofial Co-efficent C(n,k) = n!/k!(n-k)!******\n\n");

    printf("Enter how many elements are in the set ie n: ");
    scanf("%d",&n);
    printf("Enter how many combinations you want to make ie k: ");
    scanf("%d",&k);

    if(n < 0 || k < 0)
    {
        printf("Please Enter  Positive Integer \n");
        return 0;
    }

    else if(k > n)
    {
        printf("Combinations can not be greter than the set Please enter a valid combinations\n");
    }

    else if (n > 0 && k > 0) 
    {
        for(int i = 1; i <=n; i++)
        {
            factorial_n *= i;
        }

        for(int i = 1; i <=k; i++)
        {
            factorial_k *= i;
        }

        sub = n - k;

        for(int i = 1; i <=sub; i++)
        {
            factorial_sub *= i;
        }

        b_coefficent = factorial_n / (factorial_k * factorial_sub);

        printf("C(%d,%d) = %lld",n,k,b_coefficent);
    }


    return 0;

}