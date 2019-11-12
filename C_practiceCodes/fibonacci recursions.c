#include<stdio.h>
int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	return (fib(n-1)+fib(n-2));
}
main()
{
	int i,n;
	printf("enter the number : ");
	scanf("%d",&n);
	printf("fibonacci sequence for n no terms is:\n");
	for(i=0;i<n;i++)
    	printf("%d ",fib(i));
    printf("\nthe last term of sequence would be : \n");
    printf("%d ",fib(n-1));
}
