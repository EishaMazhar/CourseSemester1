#include<stdio.h>
main()
{
	int a[3][3],b[3][3],temp=0,temp1=0,i,j,flag,flag2,r,c;

	printf("Enter the elements for first matrix..!!\n");   //input matrix 1
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%2d", &a[i][j]);
			}
		printf("\n");
	}	
	printf("Enter the elements for second matrix..!!\n"); //input matrix 2
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%2d", &b[i][j]);
			}
		printf("\n");
	}
	for(i=0;i<3;i++){                   //identity check 1
		for(j=0;j<3;j++){
		if(i==j)
    	{  	if(a[i][j]==1)
		temp++;
		 	}
    	else
    	   {
			 if(a[i][j]==0)
			 temp++;
		}
	}
	if(temp==9)                               
	printf("first matrix is identity.");
	else
	{  printf("1st is not identity.");
	            flag=1;
	}
	
	for(i=0;i<3;i++){                    //identity check 2
		for(j=0;j<3;j++){
		if(i==j)
    	{  	if(b[i][j]==1)
		temp1++ ;	}
    	else
    	   {
			 if(b[i][j]==0)
			 temp1++;
		}
	}}
	if(temp1==9)
	printf("\nsecond matrix is identity.");
	else
	{   	printf("\n2nd is not identity.");
	            flag2=1;
	}

}
} 
