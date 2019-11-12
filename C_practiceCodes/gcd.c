#include<stdio.h>
#include<string.h>
int gcd(int a,int b)
{
//with recursion:
	if(a%b==0)
	  return b;
	else
	  return (gcd(b,a%b));
/*
//without recursion
	int c;
	do
	{
		c=a%b;
		if(c==0)
		break;
		a=b;
		b=c;
		
	}while(c!=0);
	return b;*/
}
main()
{
	int a,b;
	printf("enter the two numbers : ");
	scanf("%d%d",&a ,&b);
	int x=gcd(a,b);
	printf("gcd is : %d",x);
}
