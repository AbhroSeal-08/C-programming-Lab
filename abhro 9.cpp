#include<stdio.h>
int main()
{
	int i,n,r,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		r=n%10;
		//s=s+r;
		n=n/10;
		i++;
	}
	printf("count of the number%d",i);
	return 0;
}
