#include<stdio.h>

void recur(int k,int arr[])
{
    int count=0;
    int n=k;
    
    if(count==k)
    {
        printf("%d ",arr[k]);
        return 0;
    }
    else if(count<k)
    {
        printf("%d ",arr[k]);
    }
    
    recur(k-1,arr);
}

int sort(int n,int arr[],int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[j]>arr[j-1])
            {
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    
    
    recur(k,arr[n]);
}


int main()
{
    int n;
    scanf("%d",&n);
    int score[n];
    int k;
    scanf("%d",&k);

   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    
    sort(n,score,k);
    
    
    return 0;
}