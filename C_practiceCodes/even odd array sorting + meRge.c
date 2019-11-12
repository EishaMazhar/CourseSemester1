#include<stdio.h>
even(int*e,int s)
{
	int i,j;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s-i-1;j++)
		{
			if(e[j]>e[j+1])
			{
				int t=e[j];
				e[j]=e[j+1];
				e[j+1]=t;
			}
		}
	}
}
odd(int*o,int s)
{
	int i,j;
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<s-i-1;j++)
		{
			if(o[j]<o[j+1])
			{
				int t=o[j];
				o[j]=o[j+1];
				o[j+1]=t;
			}
		}
	}
}
main()
{
	int n,i,y=0,z=0;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int a[n],e[n],o[n],m[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
		for(i=0;i<=n-1;i++)
	{
		if(a[i]%2==0)
		{
			e[y]=a[i];
			y++;
		}
		else
		{
			o[z]=a[i];
			z++;
		}
	}
   even(e,y);
   odd(o,z);
   
  static int k=0;
   while(k!=n)
   {
   	    for(i=0;i<y;i++)
   	    {
   	    	m[k]=e[i];
   	    	k++;
	       }
	    for(i=0;i<z;i++)
   	    {
   	    	m[k]=o[i];
   	    	k++;
	       }
   }
   printf("\nsorted and merged : \n");
   for(i=0;i<n;i++)
   {
   	    printf("%d\n",m[i]);
   }
	
}
