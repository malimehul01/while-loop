#include<stdio.h>
main()
{
	
	
	int a=1,k;
	printf("Enter value of k =>");
	scanf("%d",&k);
	while (a<=10)
	{
		a=a+1;
		
		printf("\n%d*%d%=%d",k,a,k*a);
	}
	
}
