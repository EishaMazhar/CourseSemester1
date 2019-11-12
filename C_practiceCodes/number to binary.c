#include<stdio.h>
main()
{
	int n,rem,binary,base=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%2;
		binary=binary+rem*base;
		base=base*10;
		n=n/2;
	}
	printf("\nThe binary equivalent is %d", binary);
}
