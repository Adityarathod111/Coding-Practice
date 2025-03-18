#include<stdio.h>

int *gcd(int *a,int *b)
{
    if(*b==0)
    {return a;}
    int temp =*b;
    *b = *a%*b;
    *a=temp;
    return gcd(a,b);
}

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    printf("%d",*gcd(&a,&b));
}