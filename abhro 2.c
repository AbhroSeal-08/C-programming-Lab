#include<stdio.h>
int main()
{
	int i,s1=0,n,t=1,s=0;
	printf("enter the n term");
	scanf("%d",&n);
	//for(i=1;i<=n;i++)
	while(i<=n)
	{
		if(i%2==0){
			s1=s1+t;
			t=t+2;
		}
		else{
			s1=s1-t;
			t=t+2;
		}
	i++;
	}
	
     printf("sum of series%d",s1);
	 return 0;
}
