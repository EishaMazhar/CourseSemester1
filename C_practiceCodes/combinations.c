/*formula for finding different types of combination while team selection*/

#include<stdio.h>
int factorial(int x);

main()
{
	
	printf("the team of ten has 7 boys and 3 girls");
    int n,r,comb;
	n=10;r=4;
	comb=factorial(n)/(factorial(r)*factorial(n-r));
	printf("\nthe selection is possible in %d ways",comb);
	
}
int factorial(int x)
{
	int i,f;
	f=1;
   if(x==0)
    {return(f);}
	else
	{
	for(i=1;i<=x;i++)
	{	f=f*i; }
    return(f);
	}
}
