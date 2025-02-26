#include <stdio.h>

float harmonic(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return (1/n)+harmonic(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);

    printf("%f",harmonic(n));
    return 0;
}