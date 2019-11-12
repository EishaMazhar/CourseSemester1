#include<stdio.h>
main()
{
	char a[100];
	int i=0,count=1,x,e=0,l=0,f=0,y=0;	
	gets(a);
	x=strlen(a);
	for(i=0;i<=x;i++)
	{
		a[i];
		if(a[i]==' ')
	    {a[i]='\0';
		count++;}	
	}
	printf("%d words",count);
	while(y!=x)
	{
		y++;
		while (a[i]!='\0')
		{
			if(a[i]=='e'|| a[i]=='E')
			e++;
			if(a[i]=='l'||a[i]=='L')
			l++;
			if(a[i]=='f'||a[i]=='F')
			f++;
		}
	if(e>0 && l>0 && f>0)
	printf("word %d", y);
	}
}
