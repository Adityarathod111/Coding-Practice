#include <stdio.h>

int main()
{
    int arr[4][4] = {0,0,3,0,5,0,0,8,1,0,3,0,0,0,7,0};
    int count=0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }

    printf("%d",count);
    return 0;
}