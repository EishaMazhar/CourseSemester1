#include<stdio.h>
struct person
{
    int age;
	int rno;	
};
void dispay(struct person p[])
{
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d\n",p[i].age);
		printf("%d\n",p[i].rno);
	}
	
}

main()
{
	int ag,r;

	int i;
	struct person p1[3];
	for(i=0;i<3;i++)
	{
		scanf("age[%d]%d",i,&ag);
		scanf("rno[%d]%d",i,&r);
		p1[i].age=ag;
		p1[i].rno=r;
	}
	
	dispay(p1);
}
