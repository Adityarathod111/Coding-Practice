#include<stdio.h>

double fibo(int n)
{
    if(n==1)
    {return 0;}
    else if(n==2) { return 1;}
    else if(n>2)
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{

    int n;
    printf("N: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        printf("%lf ", fibo(i));
    }
    
    return 0;
}