#include<stdio.h>

long double fact(int n);

int main()
{
    int n;
    printf("N: ");
    scanf("%d", &n);

    printf("%d! = %.0Lf", n,fact(n));
    return 0;
}
long double fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else if(n>1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
    
}