#include<stdio.h>
rotate(int *a,int n)
{
	int i,l;
	l=a[n-1];
	for(i=n-1;i>=0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=l;
}
main()
{
	int i,j,n,r;
	printf("enter no: ");
	scanf("%d",&n);
	int a[n];
	
	printf("enter elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter no of rotations : ");
	scanf("%d",&r);
	
	r=r%n;
	
	for(i=0;i<r;i++)
	{
	      rotate(a,n);
	}
	printf("\rotated array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
