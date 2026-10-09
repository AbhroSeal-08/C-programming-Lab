#include<stdio.h>
int main()
{
	int i,s1=0,n,s=0;
	printf("enter the n term");
	scanf("%d",&n);
	//for(i=1;i<=n;i++)
	while(i<=n)
	{
		if(i%2==0)
		{
		  s=s*10;
		  
		  //s1=s1+s;	
		 // s=0;
		  //int f=t;
		}
		if(i%2!=0)
		{
			s=s*10+1;
			//s1=s1+s;
			//s=0;
		//	int f=t;
		}
		i++;
		s1=s1+s;
		printf("%d\t",s);
		printf("+");
	//	printf("sum of series%d",s);
	}
    printf("sum of series%d",s1);
	return 0;
}
