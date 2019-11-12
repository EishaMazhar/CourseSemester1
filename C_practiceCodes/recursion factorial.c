#include<stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return(n*fact(n-1));
}
main()
{
    long int i,n;
	printf("enter no :");
	scanf("%d",&n);
	i=fact(n);
	printf("the factorial is: %ld",i);
}
