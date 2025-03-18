#include<stdio.h>
#include<stdlib.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int* ptr = (int*)calloc(r*c*sizeof(int));

    return 0;
}