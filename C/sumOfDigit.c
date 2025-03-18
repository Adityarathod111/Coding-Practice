#include<stdio.h>

void sumD(int *n,int *s)
{
    if(*n==0)
    return;

    else
    {
    int t=*n%10;
    *n = (*n-t)/10;
    *s += t;
    sumD(n,s);
    
    return;
    }
}

int main()
{
    int n;
    int sum=0;
    int *ptrs = &sum;
    scanf("%d",&n);

    int *ptr = &n;

    sumD(ptr,ptrs);
    printf("%d",sum);
}