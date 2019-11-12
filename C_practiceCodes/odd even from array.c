#include<stdio.h>
main()
{
	int array[10];
	int i,no;
	for(i=0;i<10;i++)
	{
		printf("enter a number : ");
		scanf("%d", &array[i]);
	}
	for(i=0;i<10;i++)
	{
		if(array[i]%2==0)
		printf("\nthe even no is %d",array[i]);
		else
		printf("\nodd no is %d",array[i]);
	}
}
