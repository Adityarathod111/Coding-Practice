#include <stdio.h>

int main()
{
    int arr[7] ={5,4,8,6,2,7,9};
    int n = 7;

    for(int j = 0;j<n;j++)
    {

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            arr[i] = arr[i]+arr[i+1];
            arr[i+1]= arr[i]-arr[i+1];
            arr[i]= arr[i]-arr[i+1];
        }
        
    }
    }

    for(int w=0;w<n;w++)
    {
        printf("%d ",arr[w]);
        
    }
    
    return 0;
}