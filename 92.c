#include<stdio.h>
int main()
{
	 int no[5],i,sum=0;
	 for(i=0;i<5;i++)
	 {
	 scanf("%d",&no[i]);
	 }
	for(i=0;i<5;i++)
	 {
	 sum=sum+no[i];
	 }
	 printf(" %d",sum);
	 

return 0;
}
