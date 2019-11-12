#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("enter no of elements :");
	scanf("%d",&n);
	char a[n];
	printf("enter elements :\n");
	
	for(i=0;i<n;i++)
	   scanf("%c",&a[i]);
	   
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[j]==a[i])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
			n--;
			}
			else
			j++;
		}
	}
	printf("\nfiltered array : \n");
	for(i=0;i<n;i++)
	   printf("%c",a[i]);
}
