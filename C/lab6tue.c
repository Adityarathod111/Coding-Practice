#include <stdio.h>

void passanger();

int main()
{

    int totw=0;

    passanger(totw);
    
    return 0;
}

void passanger(int totWeight)
{

    char pas;
    int maxBag,totBag;
    
    scanf("%c",&pas);

    if (pas=='E')
    {
        maxBag=2;

    }
    else if(pas=='B')
    {
        maxBag=4;
    }

    scanf("%d",&totBag);

    char bag[totBag];
    int weight[totBag];

    for(int i=0;i<totBag;i++)
    {
        scanf("%c ",&bag[i]);
    }

    for(int i=0;i<totBag;i++)
    {
        scanf("%d ",&weight[i]);
    }

    for(int i=0;i<totBag;i++)
    {
        totWeight+=weight[i];
    }
    int weightNum=0;

    if(totWeight<5000)
    {
        weightNum = 1;
    }

    else{weightNum = 0;}

    int luglim[totBag];

    
    for(int i=0;i<totBag;i++)
    {
        if(bag[i]=='C')
        {  
            luglim[i]=7;
        
        }
        else{luglim[i]=25;}  
    }

    for(int i=0;i<totBag;i++)
    {
        printf("Bag %d:",i);
        if(weight[i]>luglim[i])
        {
            printf("0\n%d",(weight[i]-luglim[i])*500);
        }
        else
        {
            printf("1\n");
        }
        
        
    }
    passanger(totWeight);

}