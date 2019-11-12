#include<stdio.h>
main()
{

int n,a=0,k,b=0,i,sum=0;

	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{

		scanf("%d\t%d",&a,&b);
		sum=a+b;
		arr[i]=sum;
		printf("%d\n",arr[i]);
		printf("\n");
		sum=0;
	}

}
