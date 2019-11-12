#include<stdio.h>
main()
{
	int i,j,n,no;
	printf("Enter the no : ");
	scanf("%d", &n);
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			if(i+j==n+1 || i-j==n-1)
			printf("  ");
			else
			printf("* ");
		}
	printf("\n");
	}
}
