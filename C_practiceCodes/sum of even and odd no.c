#include<stdio.h>
main()
{
	int odd,even,num;
	odd=0;
	even=0;
	printf("If you want to exit then press 0\n");
	
	do
	{
		printf("\nEnter a number : ");
		scanf("%d", &num);
		
		if(num%2==0)
		even+=num;
		
		else if(num%2 != 0 )
		odd+=num;
			
	} while (num!=0);
	printf("\nTHE SUM OF EVEN NUMBERS IS %d", even);
	printf("\n\nTHE SUM OF ODD NUMBERS IS %d", odd);
          
}
