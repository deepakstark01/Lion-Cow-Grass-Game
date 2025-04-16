//Game By Deepak 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand random number generator stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{

if (char1==char2)
{
    return -1;
}
else if ((char1 == 'L') && (char2 == 'C'))
{
    return 1;
}
else if ((char2 == 'L') && (char1 == 'C'))
{
    return 0;
}

else if ((char1 == 'G') && (char2 == 'L'))
{
    return 1;
}

else if ((char2 == 'G') && (char1 == 'L'))
{
    return 0;
}
else if ((char1 == 'C') && (char2 == 'G'))
{
    return 1;
}

else if ((char2 == 'C') && (char1 == 'G'))
{
    return 0;
}

}

int main()

{
    int playerScore = 0, computerScore = 0, temp,i;
    char a[100], playerChar, compChar;
    char dic[] = {'L', 'G', 'C'};
    printf("Welcome to the game Lion ,Cow and Grass\n Enter player Name \n");
    
    gets(a);

    printf("\n %s  VS computer \n",a );
    
    
    
    for ( i = 0; i < 3; i++)
    { 
        
        
        //player input
        printf("\n   %s's Turn \n ",a);
        printf("\nChoose 1: for Lion, 2: for Grass and 3: for Cow \n");
        scanf("%d", &temp);
        getchar();
        playerChar = dic[temp-1];
        printf("\n\n You choose ->%c\n\n",playerChar);
        
        //computer input
        printf(" Computer Turns.......\n\n ");
        
        temp = generateRandomNumber(3) +1;
        compChar = dic[temp-1];
        printf("CPU choose %c\n\n",compChar);
       
       
       
       //comparing score
        if (greater(compChar, playerChar)==1)
        {
            computerScore +=1;
          printf("  CPU Got it !\n\n");
        }

        else if (greater(compChar, playerChar) ==-1)
        {
            computerScore +=1;
            playerScore +=1;
        printf(" it's a DRAw !\n\n");
        
        }

        else
        {
            playerScore +=1;
          printf("  YOu Got it !\n\n");
        }
      printf("\n    |Score Board| \n  %s = %d  Computer Score = %d \n",a,playerScore,computerScore);
    }
    
   if (playerScore>computerScore)
   {
       printf("Congrats *** You Won these Game ***");
   }
   else if(playerScore==computerScore)
   {
       printf("Nice Try Match is Draw");
   }
   
   else
   {
       printf("You loss Cpu win try next time ");
   }
   
  getch();

    return 0;
}
