#include<stdio.h>
int main()
{
	int n,i=1,a=-1,b=1 ,s=0;
	printf("enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		s=a+b;
		printf("%d ",s );
		a=b;
		b=s;
		i++;
	//printf("series %);
	}
//	printf("sum of the sewries %d \n",s);
	return 0;
	
	}
