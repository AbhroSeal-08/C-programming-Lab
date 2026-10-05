#include<stdio.h>
int main()
{
	int i=0,n,r,s=0,a=0,b=0,c=1;
	printf("enter the n term:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==1)
		{
			printf("%d\t",a);
		}
	   else	if(i==2)
		{
			printf("%d\t",b);
		}
	   else	if(i==3)
		{
			printf("%d\t",c);
		}
		else{
		
		s=a+b+c;
		a=b;
		b=c;
		c=s;
	//	i++;
			printf("%d\t",s);
		}
		i++;
	}
//	printf("reverse of the number%d",s);
	return 0;
}
