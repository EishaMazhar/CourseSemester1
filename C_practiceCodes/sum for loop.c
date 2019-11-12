#include<stdio.h>
main()
{

	int last,i,sum=0;
	printf("Enter the last no : ");
	scanf("%d", &last);
	
	for (i=1;sum+i<=last;i++)
	{   
	    int a=sum;
	    sum=sum+i;
		printf("\n%d + %d = %d",a,i,sum);
	
	}
	
	
	
}
