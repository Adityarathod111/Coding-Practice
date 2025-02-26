#include <stdio.h>

void move(int n,char source,char dest,char aux)
{
    if(n==1)
    {
        printf("%d:%c to %c\n",n,source,dest);
        return;
    }

    move(n-1,source,dest,aux);
    printf("%d:%c to %c\n",n,source,dest);
    move(n-1,aux,source,dest);

}
int main()
{
    int n;

    scanf("%d",&n);

    move(n,'A','C','B');
    
    return 0;
}
