#include <stdio.h>
int main(void) {
	int r,a,product=1;
	scanf("%d",&n);
	while(r!=0)
	{
		a=r%10;
		product=product*a;
		r=r/10;
	}
	printf("%d",product);
	return 0;
}
