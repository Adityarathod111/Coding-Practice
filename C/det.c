#include <stdio.h>

int main()
{
    int arr[3][3]={2,3,4,1,3,4,5,2,6};

    for(int i=0;i<=2;i++)
    {
        int j=0;
        int sum,multi;
        while(j<=2)
        {
            int k=j;
            if(k>2)
            {k-=3;}
            multi=arr[i][k]*multi;
            j++;


        }

    }
    return 0;
}