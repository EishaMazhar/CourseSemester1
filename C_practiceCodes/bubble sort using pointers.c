#include<stdio.h>
#include<stdlib.h>
sort(int*a,int*b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
main()
{
	int n,*a,i,j;
	printf("enter the size of array : ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	
	printf("enter the elements of array : \n");
	for(i=0;i<n-1;i++)
	    scanf("%d\n",a+i);
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			sort(&a[j],&a[j+1]);
			}
		}
	}
	printf("after sort : \n");
	for(i=0;i<n-1;i++)
	printf("%d\n",*(a+i));
}
