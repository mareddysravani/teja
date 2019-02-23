#include <stdio.h>
int main(void)
{
	int s;
	scanf("%d",&s);
	while(s%2==0)
	{
		s/=2;
	}
	printf("%d",s);
	return 0;
}
