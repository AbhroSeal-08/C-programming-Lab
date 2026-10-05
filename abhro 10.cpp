#include<stdio.h>
int main()
{
	int i,n,r,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
		i++;
	}
	printf("reverse of the number%d",s);
	return 0;
}
