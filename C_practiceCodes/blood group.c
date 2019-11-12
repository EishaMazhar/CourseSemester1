#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void func();
main()
{
	func();
}

void func()
{
	int arr1[8][8]={{1,0,0,0,0,0,0,0},
					{1,1,0,0,0,0,0,0},
					{1,0,1,0,0,0,0,0},
					{1,1,1,1,0,0,0,0},
					{1,0,0,0,1,0,0,0},
					{1,1,0,0,1,1,0,0},
					{1,0,1,0,1,0,1,0},
					{1,1,1,1,1,1,1,1}};
	char arr2[8][4]={{"O-"},{"O+"},{"A-"},{"A+"},{"B-"},{"B+"},{"AB-"},{"AB+"}};					

	char in[4];	
	printf("Enter a blood group: ");
	gets(in);
    int i;
	for (i=0; i<8; i++)
	{
		if (strcmp(in,arr2[i])==0)
		{
			int m=i;
			printf("It can donate to: ");
			for (i=0; i<8; i++)
			{
				if (arr1[i][m]==1)
				{
					printf("%s ",arr2[i]);
				}
			}
		}
		
	}
	
	for (i=0; i<8; i++)
	{
		if (strcmp(in,arr2[i])==0)
		{
			int m=i;
			printf("\nIt can recieve from: ");
			for (i=0; i<8; i++)
			{
				if (arr1[m][i]==1)
				{
					printf("%s ",arr2[i]);
				}
			}
		}
		
	}
	
	printf("\nDo you want to enter another blood group? (y/n)\n");
	char ch;
	ch=getch();
	if (ch=='y' || ch=='y')
	{
		func();
	}
	else
	{
		printf("\nPress any key to exit...");
		exit(0);
	}
}
