#include<stdio.h>>
int main()
{
	int n, i,s=0;
	int p=2;
	printf("enter the n term");
	scanf("%d",&n);
	while(i<=n)
	{
	
		s=s+p;
		p+=3;
		i++;
		
	}
	printf("the sum of series %d\n",s);
	return 0;
}
