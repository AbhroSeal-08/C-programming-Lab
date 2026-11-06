#include<stdio.h>
int main()
{
	int i,j,k,c=0;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=5-c;k++){
		
		printf("%d",k);
	}
		printf("\n");
		c++;
	}
}
