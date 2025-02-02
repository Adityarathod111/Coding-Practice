#include<stdio.h>

int main()
{

    int n,count =0; // First n prime numbers
    scanf("%d", &n);
    for(int i=2;count<n;i++) // i will be an number to be checked in this loop
    {
        int temp=0;

        if(i==2)
        {
            printf("%d ",i);
            count++;
        }
        else
        {
            for(int j=2;j<i;j++) // j will be an number by which i will be checked
            {
                if(i%j==0)      
                {
                    temp = 0;
                    break;
                }

                else if(i%j!=0)
                {
                    temp = i; // if i is an prime number then temp var will be changes to i otherwise it'll be zero
            
                }
        
        
        }
        if(temp ==0) 
        {
        }
        
        else
        {
            count++; // count will be increased by 1 as 1 prime number is detected
            printf("%d ",i); // temp var = zero means it is not an prime number then we won't do a thing otherwise we'll print that number
        }
        }
        
    }
    return 0;

}