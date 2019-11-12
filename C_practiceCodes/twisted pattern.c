#include<stdio.h>
main()
{
	int i,j,no,s;char x;
	printf("enter a no : ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{   x='A';
		for(j=1;j<=no;j++)
		{
			if(i+j>=no+1)
			{ printf("%c",x);
			  x++;}
			else
			printf(" ");
		}
	printf("\n");
	}

	for(i=1;i<=no;i++)
	{   x='A';
		for(s=1;s<=no;s++)
		{
			printf(" ");
		}
		for(j=no;j>=i;j--)
		{
		printf("%c", x);
		x++;
		}
	printf("\n");}
}
