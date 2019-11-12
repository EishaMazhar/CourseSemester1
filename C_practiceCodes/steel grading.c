/* Steel grading*/

#include<stdio.h>
void grade(int h,int t,int c);
main()
{
	int hard,tensile,cc;
	printf("Enter hardness of steel : ");
	scanf("%d", &hard);
	printf("Enter carbon content of steel : ");
	scanf("%d", &cc);
	printf("Enter tensile strength of steel : ");
	scanf("%d", &tensile);

	grade(hard,tensile,cc);
	
}
void grade(int h,int t,int c)
{
	if (h>=50 && c<=70 && t>=5600 )
	printf("\nGrade=10");
	if(h>=50 && c<=70 && t<=5600)
	printf("\nGrade=09");
	if(h<=50 && c<=70 && t>=5600)
	printf("Grade=08");
	if (h>=50 && c>=70 && t>=5600 )
	printf("\nGrade=07");
	if( (h<=50 && c>=70 && t>=5600 ) || (h>=50 && c>=70 && t<=5600 ) ||  (h<=50 && c<=70 && t<=5600 ))
	printf("\nGrade=06");
	if (h<=50 && c>=70 && t<=5600 )
	printf("\nGrade=05");
}
