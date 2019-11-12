#include<stdio.h>

main()
{
	int n=0,i=0,j=0,t;
	printf("Enter the no of elements you want to give: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n-1;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for (i=n-1;i>=0;i--){           //descending order
		printf ("%d ",arr[i]);
	}
	printf("\nThe highest value is : %d\nThe lowest value of aray is : %d",arr[n-1],arr[0]);
}
