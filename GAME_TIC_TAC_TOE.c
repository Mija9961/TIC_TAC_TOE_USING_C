#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
int dicission(char A[]);
int Atoi(char ch)
{
	switch(ch)
	{
		case '1' : return 1; break;
		case '2' : return 2; break;
		case '3' : return 3; break;
		case '4' : return 4; break;
		case '5' : return 5; break;
		case '6' : return 6; break;
		case '7' : return 7; break;
		case '8' : return 8; break;
		case '9' : return 9; break;
		default : return -1;
	}
}
display(char A[])
{
    system("cls");
    printf("\n--------TIC-TAC-TOE --------\n");
    printf("\nPlayer1 : O\nPlayer2 : X\n");
    printf("\n_______________\n");
    printf(" %c   | %c  | %c  |\n",A[0],A[1],A[2]);
    printf("_____|____|____|\n");
    printf(" %c   | %c  | %c  |\n",A[3],A[4],A[5]);
    printf("_____|____|____|\n");
    printf(" %c   | %c  | %c  |\n",A[6],A[7],A[8]);
    printf("_____|____|____|\n");
 }
 play(char A[])
 {
   int player, flag = 1, c;
   int i,j, n;
   char ch;
   for (i = 1; i <= 9; i++)
    {
           player = ( i % 2 == 1) ? 1 : 2;
           printf("Player %d : ",player);
           ch = getche();
           j = Atoi(ch);
           //scanf("%d",&j);
     j = j - 1;
     if(A[j] == 'O' || A[j] == 'X' || j >= 9 || j < 0)
     {  printf("Invalid input, try again\n");
        Sleep(2000);
       i--;
       flag = 0;
     }
     if(flag == 1)
        A[j] = (player == 1) ? 'O' : 'X';
    flag = 1;
    display(A);
    n = dicission(A);
    if(n==1)
    {
    	printf("\nPlayer 1 has won");
    	break;
	}
	else if(n == 2)
	{
		printf("\nPlayer 2 has won");
		break;
	}
	else
	{
		if(i == 9)
		{
			printf("\nMatch draw");
		}
	}
   }
 return 0;
 }
computer_play(char A[])
{
	int i, n1, n;
	int flag = 0;
	char ch1;
	for(i = 1; i <= 9; i++)
	{
		if(i % 2 == 1)
		{ 
     		printf("\nPlayer1(You) : ");
     		ch1 = getche();
     		n1 = Atoi(ch1);
     		//scanf("%d",&n1);
     		n1 = n1 - 1;
    		if(n1 < 0 || n1 > 8 || A[n1] == 'O' || A[n1] == 'X' )
    		{
    			i--;
        		printf("\nInvalid input, try again");
    	    	Sleep(1500);
    	    }
    	    else
    	    {
    	    	A[n1] = 'O';
			}
    	}
    	else
    	{
    		printf("Player2(Computer) : ");
    		Sleep(1500);
    		if(A[0] == 'X' && A[0] == A[1] && A[2] != 'O')
			{
				A[2] = 'X';
			}
			else if(A[0] == 'X' && A[0] == A[2] && A[1] != 'O')
			{
				A[1] = 'X';
			}
			else if(A[1] == 'X' && A[1] == A[2] && A[0] != 'O')
			{
				A[0] = 'X';
			}
			else if(A[0] == 'X' && A[0] == A[3] && A[6] != 'O')
			{
				A[6] = 'X';
			}
			else if(A[0] == 'X' && A[0] == A[6] && A[3] != 'O')
			{
				A[3] = 'X';
			}
			else if(A[3] == 'X' && A[3] == A[6] && A[0] != 'O')
			{
				A[0] = 'X';
			}
			else if(A[3] == 'X' && A[3] == A[4] && A[5] != 'O')
			{
				A[5] = 'X';
			}
			else if(A[3] == 'X' && A[3] == A[5] && A[4] != 'O')
			{
				A[4] = 'X';
			}
	    	else if(A[4] == 'X' && A[4] == A[5] && A[3] != 'O')
			{	
				A[3] = 'X';
			}
			else if(A[1] == 'X' && A[1] == A[4] && A[7] != 'O')
			{	
				A[7] = 'X';
			}
			else if(A[1] == 'X' && A[1] == A[7] && A[4] != 'O')
			{	
				A[4] = 'X';
			}
			else if(A[4] == 'X' && A[4] == A[7] && A[1] != 'O')
			{	
				A[1] = 'X';
			}
			else if(A[2] == 'X' && A[2] == A[5] && A[8] != 'O')
			{	
				A[8] = 'X';
			}
			else if(A[2] == 'X' && A[2] == A[8] && A[5] != 'O')
			{	
				A[5] = 'X';
			}
			else if(A[5] == 'X' && A[5] == A[8] && A[2] != 'O')
			{	
				A[2] = 'X';
			}
			else if(A[6] == 'X' && A[6] == A[7] && A[8] != 'O')
			{	
				A[8] = 'X';
			}
			else if(A[6] == 'X' && A[6] == A[8] && A[7] != 'O')
			{	
				A[7] = 'X';
			}
			else if(A[7] == 'X' && A[7] == A[8] && A[6] != 'O')
			{	
				A[6] = 'X';
			}
			else if(A[0] == 'X' && A[0] == A[4] && A[8] != 'O')
			{	
				A[8] = 'X';
			}
			else if(A[0] == 'X' && A[0] == A[8] && A[4] != 'O')
			{	
				A[4] = 'X';
			}
			else if(A[4] == 'X' && A[4] == A[8] && A[0] != 'O')
			{	
				A[0] = 'X';
			}
			else if(A[2] == 'X' && A[2] == A[4] && A[6] != 'O')
			{	
				A[6] = 'X';
			}
			else if(A[2] == 'X' && A[2] == A[6] && A[4] != 'O')
			{	
				A[4] = 'X';
			}
			else if(A[4] == 'X' && A[4] == A[6] && A[2] != 'O')
			{	
				A[2] = 'X';
			}
    		else if(A[0] == 'O' && A[0] == A[1] && A[2] != 'X')
    		{
    			A[2] = 'X';
			}
			else if(A[0] == 'O' && A[0] == A[2] && A[1] != 'X')
			{
				A[1] = 'X';
			}
			else if(A[1] == 'O' && A[1] == A[2] && A[0] != 'X')
            {
            	A[0] = 'X';
			}
			else if(A[0] == 'O' && A[0] == A[3] && A[6] != 'X')
			{
				A[6] = 'X';
	     	}
	     	else if(A[0] == 'O' && A[0] == A[6] && A[3] != 'X')
	     	{
	     	    A[3] = 'X';
			}
			else if(A[3] == 'O' && A[3] == A[6] && A[0] != 'X')
			{
				A[0] = 'X';
			}
			else if (A[3] == 'O' && A[3] == A[4] && A[5] != 'X')
			{
				A[5] = 'X';
			}
			else if(A[3] == 'O' && A[3] == A[5] && A[4] != 'X')
			{
				A[4] = 'X';
			}
			else if(A[4] == 'O' && A[4] == A[5] && A[3] != 'X')
			{
				A[3] = 'X';
			}
			else if(A[1] == 'O' && A[1] == A[4] && A[7] != 'X')
			{
				A[7] = 'X';
			}
			else if(A[1] == 'O' && A[1] == A[7] && A[4] != 'X')
			{
				A[4] = 'X';
			}
			else if (A[4] == 'O' && A[4] == A[7] && A[1] != 'X')
			{
				A[1] = 'X';
			}
			else if(A[2] == 'O' && A[2] == A[5] && A[8] != 'X')
			{
				A[8] = 'X';
			}
			else if(A[2] == 'O' && A[2] == A[8] && A[5] != 'X')
			{
				A[5] = 'X';
			}
			else if(A[5] == 'O' && A[5] == A[8] && A[2] != 'X')
			{
				A[1] = 'X';
			}
			else if(A[6] == 'O' && A[6] == A[7] && A[8] == '9')
			{
				A[8] = 'X';
			}
			else if(A[6] == 'O' && A[6] == A[8] && A[7] == '8')
			{
				A[7] = 'X';
			}
			else if(A[7] == 'O' && A[7]== A[8] && A[6] == '7')
			{
				A[6] = 'X';
			}
			else if(A[0] == 'O' && A[0] == A[4] && A[8] == '9')
			{
				A[8] = 'X';
			}
			else if(A[0] == 'O' && A[0] == A[8] && A[4] == '5')
			{
				A[4] = 'X';
			}
			else if(A[4] == 'O' && A[4] == A[8] && A[0] == '1')
			{
				A[0] = 'X';
			}
			else if(A[2] == 'O' && A[2] == A[4] && A[6] == '7')
			{
				A[6] = 'X';
			}
			else if(A[2] == 'O' && A[2] == A[6] && A[4] == '5')
			{
				A[4] = 'X';
			}
			else if(A[4] == 'O' && A[4] == A[6] && A[2] == '3')
			{
				A[2] = 'X';
			}
			else if(A[4] == '5')
			{
				A[4] = 'X';
			}
	     	else if (A[2] == '3' && A[6] == '7')
	     	{
	     		A[6] = 'X';
			}
			else if(A[0] == '1' && A[8] == '9')
			{
				A[0] = 'X';
			}
			else
	     	{
	     		label : 
	     		n1 = rand() % 10;
	     		if(n1 > 8 || A[n1] == 'O' || A[n1] == 'X')
	     		{
	     			goto label;
				}
				 else
				 {
				 	A[n1] = 'X';
				}
			}
		}
		display(A);
		n = dicission(A);
		if(n == 1)
		{
			printf("\nPlayer1(You) won");
			break;
		}
		else if(n == 2)
		{
			printf("\nPlayer2(Computer) won");
			break;
		}
		else
		{
			if(i == 9)
			{
				printf("\nMatch draw");
			}
		}
	}
}
int dicission(char A[])
 {
   if((A[0] == 'O' && A[0] == A[1] && A[1] == A[2]) || (A[3] == 'O' && A[3] == A[4] && A[4] == A[5] ) )
    return 1; //printf("PLAYER 1 HAS WON");
   else if((A[0] == 'X' && A[0] == A[1] && A[1] == A[2]) || (A[3] == 'X' && A[3] == A[4] && A[4] == A[5] ))
      return 2;//printf("PLAYER 2 HAS WON");
   else if((A[6] == 'O' && A[6] == A[7] && A[7] == A[8]) || (A[0] == 'O' && A[0] == A[3] && A[3] == A[6] ))
     return 1;//printf("PLAYER 1 HAS WON");
   else if ((A[6] == 'X' && A[6] == A[7] && A[7] == A[8]) || (A[0] == 'X' && A[0] == A[3] && A[3] == A[6] ))
     return 2;//printf("PLAYER 2 HAS WON");
   else if ((A[1] == 'O' && A[1] == A[4] && A[4] == A[7]) || (A[2] == 'O' && A[2] == A[5] && A[5] == A[8] ))
     return 1;//printf("PLAYER 1 HAS WON");
   else if ((A[1] == 'X' && A[1] == A[4] && A[4] == A[7]) || (A[2] == 'X' && A[2] == A[5] && A[5] == A[8] ))
     return 2;//printf("PLAYER 2 HAS WON");
   else if ((A[0] == 'O' && A[0] == A[4] && A[4] == A[8]) || (A[2] == 'O' && A[2] == A[4] && A[4] == A[6] ))
     return 1;
   else if ((A[0] == 'X' && A[0] == A[4] && A[4] == A[8]) || (A[2] == 'X' && A[2] == A[4] && A[4] == A[6] ))
     return 2;
   else
     return -1;
 }
 int main()
 {
 	int n;
 	while(1)
 	{
 		char Array[] = {'1','2','3','4','5','6','7','8','9'};
    	display(Array);
    	printf("\n1.Play against your friend\n2.Play against computer\n3.exit");
        printf("\nEnter your choice : ");
	    scanf("%d",&n);
        switch(n)
        {
        	case 1 : play(Array);
	                 break;
	        case 2 : computer_play(Array);
	                 break;
	        case 3 : exit(0);
	        default : printf("\nInvalid input");
	    }
	    printf("\nEnter any key to continue ");
	    getch();
    }
 	return 0;
 }

