#include<stdio.h>
#include<stdlib.h>
typedef struct cricketers
{
	char name[20];
	int age;
	int test_matches;
	float averageRuns;
	
}crk;
sort(int n,crk c[n])
{
	int i,j,pos;
	crk swap;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(c[pos].averageRuns > c[j].averageRuns)
			{
				pos=j;
			}
		}
		if(pos!=i)
		{
			swap=c[i];
			c[i]=c[pos];
			c[pos]=swap;
		}
	}
}
display(int n,crk c[n])
{
	int i=0;
	for(i=0;i<n;i++)
	{
			printf("%d\n",i+1);
    	printf("name : ");
    	puts(c[i].name);
    	printf("age : %d\n",c[i].age);
    	printf("matches : %d\n",c[i].test_matches);
    	printf("average : %.2f\n",c[i].averageRuns);
    	
	}

}
main()
{
	int n,i;
	printf("how much data you want to input : ");
	scanf("%d",&n);
	crk *cptr=(crk*)malloc(n*sizeof(crk));
    for(i=0;i<n;i++)
    {
    	printf("%d\n",i+1);
    	printf("name\n");
    	scanf("%s(^\n)",cptr[i].name);
    	printf("age\n");
    	scanf("%d",&cptr[i].age);
    	printf("matches\n");
    	scanf("%d",&cptr[i].test_matches);
    	printf("average\n");
    	scanf("%f",&cptr[i].averageRuns);
	}
	sort(n,cptr);
	display(n,cptr);
	
}
