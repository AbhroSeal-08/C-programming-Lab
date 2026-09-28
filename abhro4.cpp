#include<stdio.h>
int main()
{
	int n,i=1,s=0,p=1;
	printf("enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		s=s+p;
		p=p+i;
		i++;

	}
	printf("sum of the sewries %d \n",s);
	return 0;
	
	}
