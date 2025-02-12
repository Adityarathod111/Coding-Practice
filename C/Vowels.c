#include <stdio.h>

int main()
{
    char strng[] = "This is owl";
    int count =0;

    for(int i=0;strng[i]!='\0';i++)
    {
        if(strng[i]=='a'||strng[i]=='A'||strng[i]=='e'||strng[i]=='E'||strng[i]=='i'||strng[i]=='I'||strng[i]=='o'||strng[i]=='O'||strng[i]=='u'||strng[i]=='U')
        {
            count++;

        }
    }

    printf("%d",count);
    return 0;
}