#include<stdio.h>
int main()
{
	int i=1,n,f=0;
	printf("enter the number");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		f=1;
		}
		
	}
	if(f==2)
	{
		printf("the number is prime");
	}
	else
	{
		printf("the number is not prime");
	}
	return 0;
}
