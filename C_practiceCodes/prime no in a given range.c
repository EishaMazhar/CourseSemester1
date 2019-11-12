#include<stdio.h>
#include<stdlib.h>
main()
{
	int min,max,i=0,j=0,count=0;
	
	printf("Enter min range : ");
	scanf("%d",&min);
	
	printf("Enter max range : ");
	scanf("%d",&max);
	
	for(i=min;i<=max;i++)
	{
		 count=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
	if(count==0 && count!=1)
       {
   	    printf("%d ",i);
	   }
	}
}
