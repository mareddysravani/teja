#include <stdio.h>
int main()
{
	int s,r,i,a[10];
	scanf("%d\t%d",&s,&r);
	for(i=0;i<=s;i++)
	{
	scanf("\n%d\t",&a[i]);
	}
	printf("%d",a[r-1]);
	return 0;
}
