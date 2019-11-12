#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,n,*ptr1,k,l;
	printf("enter the no:");
	scanf("%d",&n);
	int A[n][n],B[n][n];
	ptr1=(int*)malloc(n*n*n*n*sizeof(int));
	printf("enter the elements of first array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
	
	printf("the matrix A is :\n");
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{
		printf("%2d ",A[i][j]);
	}printf("\n");
	}
	printf("the matrix B would be : \n");
	
	for(i=0,k=n-1;i<n && k>=0;i++ , k--)
		for(j=0,l=n-1;j<n && l>=0;j++ , l--)
		{
			B[i][j] = A[i][j] + A[k][l];
		}
	
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{
		printf("%2d ",B[i][j]);
	}printf("\n");
	}
}
