#include<stdio.h>
int main()
{
	int a,c,r;
	printf("Enter Number:");
	scanf("%d",&a);
	for(r=1;r<=(2*a)+1;r++)
	{
		for(c=1;c<=a+2;c++)
		{
			if(c+r<=a+2 || r-c>=a)
			{
				printf(".");
			}
			else
			printf(" o");
		}
		printf("\n");
	}
}
