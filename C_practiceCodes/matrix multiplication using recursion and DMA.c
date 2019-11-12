/*matrix multiplication using recursions and arrays*/

#include<stdio.h>
#include<stdlib.h>
multiply(int r1,int c1,int r2,int c2,int**a,int**b,int**c)
{
	static int i=0,j=0,k=0;
	if(i>r1)
    	return;
    else if(i<r1)
    {
    	if(j<c2)
    	{
    		if(k<c1)
    		{
    			c[i][j]+=a[i][k]*b[k][j];
    			k++ ;
    		    multiply(r1,c1,r2,c2,a,b,c);
			}
			k=0;
			j++;
			multiply(r1,c1,r2,c2,a,b,c);
		}
		j=0;
		i++;
		multiply(r1,c1,r2,c2,a,b,c);
	}
}
main()
{
	int r1,c1,r2,c2,i,j;
	printf("enter the no of rows and columns of matrix A : \n");
	scanf("%d %d",&r1,&c1);
	printf("enter the no of rows and columns of matrix B : \n");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{
		printf("\nthe multiplication is not possible..!!\n");
	}
	else
	{
		printf("enter matrix A :\n");
		int**a=(int**)malloc(r1*sizeof(int*));
		for(i=0;i<r1;i++)
		{
			a[i]=(int*)malloc(c1*sizeof(int));
			for(j=0;j<c1;j++)
			{
				printf("a[%d][%d]: ",i,j);
				scanf("%d",&(a[i][j]));
				printf("\n");
			}
		}
		printf("enter matrix B :\n");
		int**b=(int**)malloc(r2*sizeof(int*));
		for(i=0;i<r2;i++)
		{
			b[i]=(int*)malloc(c2*sizeof(int));
			for(j=0;j<c2;j++)
			{
				printf("b[%d][%d]: ",i,j);
				scanf("%d",&b[i][j]);
				printf("\n");
			}
		}
		int**c=(int**)malloc(r1*sizeof(int*));
		for(i=0;i<r1;i++)
		{
            c[i]=(int*)malloc(c2*sizeof(int));
            for(j=0;j<c2;j++)
            {
            	c[i][j]=0;
			}
		}
		
		multiply(r1,c1,r2,c2,a,b,c);
		for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c2;j++)
	        {
	      		printf("%2d ",c[i][j]);
			}printf("\n");
		}
	}
	
}
