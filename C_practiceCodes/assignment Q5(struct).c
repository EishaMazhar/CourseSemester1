/* Student id and name entry */

#include<stdio.h>
#include<stdlib.h>
struct std
{
	int ID;
	char name[20];
};
main()
{
	int no,i,d,dc,pos,count=0,flag=1;
	printf("enter the number of students whosde data you want to enter : ");
	scanf("%d",&no);
	struct std s[no];
	for(i=1;i<=no;i++)
	{
		printf("%d :\n",i);
		printf("enter the ID of student : ");
    	scanf("%d",&s[i].ID);
    	printf("enter the name of student : ");
    	scanf("%s",s[i].name);
	}

	printf("if you want to delete an input then press yes=1 or no=0\n");
	scanf("%d", &dc);
	if(dc == 1)
	{
		printf("\nenter the ID whose data you want to delete :\n");
    	scanf("%d",&d);
    	for(i=1;i<=no;i++)
	{
		if(s[i].ID==d)
	    {
	    	count++;
	    	if(count==1 && count<2)
	    	{
	    		pos=i;
				printf("%d\n",pos);
			}
	    	else
	    	{
	    		printf("\nmore than one references to ID");
	    		flag=0;
	    		break;
			}
	    	if(flag==0)
	break;	
		}	if(flag==0)
	break;
	}
	while(flag==1)
	{
		printf("\tID :\t\tname :\n");
		for( i=1 ; i<=no ; i++ )
		{
			if(i!=pos)
			{
			    printf("\t%d\t\t",s[i].ID);
			    puts(s[i].name);	
			}
		}
	break;
	}
		}
	else
	{
		printf("\n\tID :\t\tname :\n");
		for(i=1;i<=no;i++)
		{
			printf("\t%d\t\t",s[i].ID);
			puts(s[i].name);
		}
	}
}
