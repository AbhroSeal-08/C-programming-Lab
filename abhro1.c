/* display the odd number from to 1 to n */
 
  #include <stdio.h>
  int main()
  {
  	int i,n,o;
  	printf("enter the number :");
  	scanf("%d", &n);
  	for(i=1;i<=n;i++)
  	{
  		if(i%2!=0)
  			printf("the number are even %d\n",i);
	  }
	  return 0;
  }
