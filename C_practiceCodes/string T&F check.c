#include<stdio.h>
#include<string.h>
typedef struct student
{
	char ID[8];
	char answers[20];
	int total_marks;
}std;
int total(char t[21])
{
	int i;
	char key[21]="TFTFTFTFFTTFTFTTFTFTF";
	int sum=0;
	for(i=0;i<20;i++)
	{
		if(t[i]==key[i])
		{
			sum=sum+2;
		}
	    if(t[i]!=key[i]&&(key[i]=='T'||key[i]=='F'))
		{
			sum=sum+1;
		}
		else
		sum=sum+0;
	}
	
	return sum;
}
main()
{
	int n,i,j;
	char key[21]="TFTFTFTFFTTFTFTTFTFTF";
	printf("how many students :");
	scanf("%d",&n);
	std s[n];
	for(i=0;i<n;i++)
	{
		printf("%d\n",i+1);
		printf("Id : ");
		scanf("%s(^\n)",s[i].ID);
		printf("enter your answers : ");
		scanf("%s(^\n)",s[i].answers);
		int score=total(s[i].answers);
		s[i].total_marks=score;
		printf("%d",s[i].total_marks);
	//	gets(s[i].answers);
		printf("\n");
	}
}
