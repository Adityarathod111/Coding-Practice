#include <stdio.h>
#include <math.h>

void min(int a, int b)
{
    a>b ? printf("min: %d\nmax: %d",b,a) :printf("min: %d\nmax: %d",a,b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    min(a,b);
    return 0;
}