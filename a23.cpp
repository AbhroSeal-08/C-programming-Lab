#include<stdio.h>
int main()
{
	int i,j,s,n;
	printf("enter the row");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=n-i+1;j--)
		{
			printf("%d",j);
		}
		for(j=n-i+2;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(s=1;s<=n-i;s++)
		{
			printf(" ");
		}
		for(j=n;j>=n-i+1;j--)
		{
			printf("%d",j);
		}
		for(j=n-i+2;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		
		
		
		
		
		
		
	}
	return 0;
}

