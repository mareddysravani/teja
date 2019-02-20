#include<stdio.h>
void main()
{
    int n[10],i,max,m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
    scanf("%d",&n[i]);
    }
    max=n[0];
    for(i=0;i<m;i++)
    {
        if(max>n[i])
        {
        printf("%d",i+1);
        break;
        }
    
    }
}
