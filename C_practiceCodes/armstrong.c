#include<stdio.h>
#include<math.h>
int count(int n)
{
	int c=0;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
    return c; 
}
main()
{
	/*program 1: for a given limit! */
	int n=0,i=0,rem=0,c=0,arm=0,orig,c1;
	printf("Enter a no [100-999]: ");
	scanf("%d",&n);
	c=count(n);
	if(c>2&&c!=2)
	{
		for(i=0;i<n;i++)
		{
            arm=0;
			orig=i;
			c1=count(orig);
			while(orig>0)
			{
				rem=orig%10;
				arm=arm+pow(rem,c1);
				orig=orig/10;
			}
			if(arm==i)
			{
				printf("%d ", arm );
			}
		
		}
	}
    else
    {
    	printf("invalid entry !");
	}
	
		
	/*
	//program 2: for checking 1 number
	int n,c=0,arm=0,orig ;
	printf("enter the no : ");
	scanf("%d",&n);
	orig=n;
	c=count(n);
    while(n!=0)
    {
    	int rem=n%10;
    	arm=arm+pow(rem,c);
    	n=n/10;
	}

	if(arm==orig)
	{
	printf("\narmstrong no!\n");
	}
	else
	{printf("\nnot!\n");
	}*/
}
