#include<stdio.h>

// int calcScore(int n,int arr[n],int team,int code)
// {
//     int weight[n];
    
//     for(int i=0;i<n;i++)
//     {
//         weight[i]=(i+1)*2;
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==code)
//         {
//             team += weight[i];
//         }
        
//     }
    
//     return team;
    
// }

int main()
{
    int n;
    scanf("%d",&n);
    while(n<=0)
    {
        scanf("%d",&n);
    }
    

    
    int win[n];
    int india=0,pak=0;
    
    
    
    for(int i=0;i<n;i++)
    {
        
        
        scanf("%d",&win[i]);
        
        if(win[i]==0 || win[i]==1)
        {
            continue;
        }
        
        i--;
        
        
        
    }
    
    int weight[n];
    
    for(int i=0;i<n;i++)
    {
        weight[i]=(i+1)*2;
    }
    
    for(int i=0;i<n;i++)
    {
        if(win[i]==1)
        {
            india += weight[i];
        }
        
        else if(win[i]==0)
        {
            pak += weight[i];
        }
    }
    
    // india = calcScore(n,win[n],india,1);
    // pak = calcScore(n,win[n],pak,0);
    
    printf("India %d\n",india);
    printf("Pakistan %d\n",pak);
    if(india>pak)
    {
        printf("India\n");
    }
    else if(india>pak)
    {
        printf("Pakistan\n");
    }
    
    else if(india==pak)
    {
        printf("Cannot decide\n");
    }
    
    return 0;
    
}