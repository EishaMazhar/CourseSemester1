#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int year;
	int month;
	int day;
}d;
typedef struct
{
	char name[20];
	int ID;
	char Department[20];
	int salary;
	d date_of_birth;
	
}emp;
display(emp*e,int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	    printf("name of employee : ");
	    puts((e+i)->name);
	    printf("ID : %d\n",(e+i)->ID);
	    printf("department : ");
	    puts((e+i)->Department);
	    printf("salary Rs : %d\n",(e+i)->salary);
	    printf("date of birth <dd/mm/yy> : %2d/%2d/%2d \n",(e+i)->date_of_birth.day,(e+i)->date_of_birth.month,(e+i)->date_of_birth.year);
	   
	}
}
void del(emp*e,int n)
{
	int d,s,i,count=0;
	while(count!=1)
	{
		printf("enter the employee ID which you want to delete :");
    	scanf("%d",&d);
     	for(i=0;i<n;i++)
	    {
	    	if(e[i].ID==d)
		    {
			s=i;
			count++;
	    	}
    	}
     	if(count==1&&count<2)
    	{
		    n=n-1;
		    e=(emp*)realloc(e,n*sizeof(emp));
		    for(i=0;i<n;i++)
	    	{
			e[i]=e[i+1];
	       }
	   	display(e,n);
    	}
	else
	printf("invalid entry.!\n");
	
	}
}
add(emp *e,int n)
{
	int i,a;
	printf("How many more employees you want:");
	scanf("%d",&a);
	n=n+a;
	realloc(e,n);
	for(i=n;i<n;i++)
	{
		printf("%d\n",i+1);
	    printf("enter the name of employee : ");
	    scanf("%s",&e[i].name);
	    
	    printf("enter ID : ");
	    scanf("%d",&e[i].ID);
	    
	    printf("enter department : ");
	    scanf("%s",&(e+i)->Department);
	    
	    printf("enter salary\nRs : ");
	    scanf("%d",&(e+i)->salary);
	    
	    printf("enter date of birth<dd/mm/yy> \n");
	    scanf("%d %d %d",&(e+i)->date_of_birth.day,&(e+i)->date_of_birth.month,&(e+i)->date_of_birth.year);
	    
		
	}
}

main()
{
	int n,i,c;
	printf("Enter the no of employee whose data you want to enter : ");
	scanf("%d",&n);
	emp *e;
	e=(emp*)malloc(n*sizeof(emp));
	printf("\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\n",i+1);
	    printf("enter the name of employee : ");
	    scanf("%s",&(e+i)->name);
	    
	    printf("enter ID : ");
	    scanf("%d",&(e+i)->ID);
	    
	    printf("enter department : ");
	    scanf("%s",&(e+i)->Department);
	    
	    printf("enter salary\nRs : ");
	    scanf("%d",&(e+i)->salary);
	    
	    printf("enter date of birth<dd/mm/yy> \n");
	    scanf("%d %d %d",&(e+i)->date_of_birth.day,&(e+i)->date_of_birth.month,&(e+i)->date_of_birth.year);
	    
	   
	}
	printf("\nChoose any code :\n1. Add an employee\n2. Delete an employee\n3. Display all employee\n4.Exit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			{
				add(e,n);
			}
		case 2:
			{
				del(e,n);
			}
		case 3:
			{
				display(e,n);
			}
		case 4:
			{
				printf("program ended..thank you!");
				break;
			}
		default:
		{
			printf("invalid entry..the data you entered is : \n");
			display(e,n);
			}	
	}
}
