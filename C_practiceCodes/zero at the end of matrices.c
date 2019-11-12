#include<stdio.h>
#include<string.h>
void pushZero(int r,int c,int a[r][c])
{
	int i=0,j=0,k=0,b[r*c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
	    	{
			b[k]=a[i][j];
			k++;
		    }
		}
	}
	for(i=k;i<r*c;i++)
	{
		b[k]=0;
	}
	k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=b[k];k++;
		}
	}
	
}
main()
{
	int r,c,i,j;
	printf("enter the number of rows & columns of matrix :\n");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("input the elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("array before :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%2d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	pushZero(r,c,a);
	
	printf("array after :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%2d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	
	
}
