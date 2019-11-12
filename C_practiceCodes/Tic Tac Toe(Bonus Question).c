/* Tic Tac Toe Game */

#include<stdio.h>
#include<string.h>

main()
{
char choice1,choice2;
int player1,player2,i,j,position,move=1,z=0,y=0,count=0,c=1,d=0,a[8],k=0,flag=1;
for(i=0;i<9;i++)
        a[i]=3;
printf("\t\t\tTIC-TAC-TOE\n");
printf("for reference to positions : \n");

printf(" ______________\n");
printf("|a[0]|a[1]|a[2]|\n");
printf("|____|____|____|\n");
printf("|a[3]|a[4]|a[5]|\n");
printf("|____|____|____|\n");
printf("|a[6]|a[7]|a[8]|\n");
printf("|____|____|____|\n");

while(flag==1)
{
printf("You have a choice of X or O for Player1\n");
scanf("%c",&choice1);
if(choice1=='X'||choice1=='x'||choice1=='O'||choice1=='o')  // flaging choice
 flag=0;
else
 { flag=1 ;
  printf("Invalid choice\n");
 }   

(choice1=='X'||choice1=='x') ? (choice2='O'): (choice2 ='X') ;          // player's choice selection

printf("Player2 choice is %c\n",choice2);

if( choice1 == 'X' || choice1 == 'x' )
{
	player1=1;player2=0;
 }
else{
	player1=0;player2=1;
} 

while(move<3)
{
    count=0;
    if(move==1)
    {
        printf("Player1 Enter the position\n");
         scanf("%d",&position);

         if(a[position]==3)
           {
               a[position]=player1;
               k=0;
               for(i=0;i<3;i++)
               {
                   for(j=0;j<3;j++)
                   {
                       if(a[k]==3)
                       printf("\t-");
                       if(a[k]==1)
                       printf("\tX");
                        if(a[k]==0)
                       printf("\tO");
                       k++;
                   }
                   printf("\n");
               }

               if((a[0]==player1&&a[1]==player1&&a[2]==player1)
||(a[3]==player1&&a[4]==player1&&a[5]==player1)||(a[6]==player1&&a[7]==player1&&a[8]==player1)||
(a[0]==player1&&a[3]==player1&&a[6]==player1)||(a[1]==player1&&a[4]==player1&&a[7]==player1)||
(a[2]==player1&&a[5]==player1&&a[8]==player1)||(a[0]==player1&&a[4]==player1&&a[8]==player1)||
(a[2]==player1&&a[4]==player1&&a[6]==player1))
                  {
                     printf("Player1 wins\n");
                      z=1;
                     printf("Thank you for playing this game\n");
                      move=3;
                    break;
                   }
                else
                {
                   move=2;
                }
           }
           else
           {
               printf("This place is not empty.Please give another position\n");
                   move=1;
                 }

      }
      for(i=0;i<9;i++)
      {
        if(a[i]==3)
        count++;
      }
      if(count==0)
      {
          move=3;
          break;
      }
      if(move==2)
      {
              printf("Player2 Enter position\n");
         scanf("%d",&position);

         if(a[position]==3)
           {
              a[position]=player2;
              k=0;
               for(i=0;i<3;i++)
               {
                   for(j=0;j<3;j++)
                   {
                       if(a[k]==3)
                       printf("\t-");
                       else if(a[k]==1)
                       printf("\tX");
                       else
                       printf("\tO");
                       k++;
                   }
                   printf("\n");
               }

              if((a[0]==player2&&a[1]==player2&&a[2]==player2)||
(a[3]==player2&&a[4]==player2&&a[5]==player2)||(a[6]==player2&&a[7]==player2&&a[8]==player2)||
(a[0]==player2&&a[3]==player2&&a[6]==player2)||(a[1]==player2&&a[4]==player2&&a[7]==player2)||(a[2]==player2&&a[5]==player2&&a[8]==player2)||
(a[0]==player2&&a[4]==player2&&a[8]==player2)||
(a[2]==player2&&a[4]==player2&&a[6]==player2))
                  {
                     printf("Player2 wins\n");
                      y=1;
                     printf("Thank you for playing..!!\n");
                      move=3;
                    break;
                   }
                else
                {
                   move=1;
                }
           }
           else
           {
           printf("This place is not empty.Please give another position\n");
                   move=2;
                 }
      }

}
if(z!=1&&y!=1)
{
printf("Match Draw...!!\n");
printf("Thank you for playing..!!\n");
}
}
}
