/*Ezigbo Ugochukwu 11/26/2020 ~Happy Thanksgiving~ Assignment #24 Simplified craps game*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void)
{
	/*declare variables*/ 
	char yn;
	int sum, point, wl, turn;
	
	srand ( (unsigned)time( NULL ) );
	
	/*get input*/
	printf("Would you like to play a simplified version of the craps game? Enter y for yes or n for no:");
	scanf(" %c", &yn);
	
	/*Calculate*/
	while(1)
	{	
		while(!(yn == 'y' || yn == 'n'))
		{
			printf("Invalid response. Enter y for yes or n for no:");
			scanf(" %c", &yn);
		}
		if(yn == 'n')
    	{
			printf("Game over.");
			return 0;
	    }
    	if(yn == 'y')
    	{
			sum = (rand()%6+1) + (rand()%6+1);
			point = sum;
			turn = 1;
			printf("Roll %d \n", turn);
			printf("The sum of the two dice is %d \n", sum);

			if(sum == 7 || sum == 11)
				wl = 1;
			else if(sum == 2 || sum == 3 || sum == 12)
				wl = 0;

			else
				while(1)
				{
					turn ++;
					sum = (rand()%6+1) + (rand()%6+1);
					printf("Roll %d \n", turn);
					printf("The sum of the two dice is %d \n", sum);
					
					if(sum == 7)
					{
						wl = 0;
						break;
					}
					
					else if(sum == point)
					{
						wl = 1;
						break;
					}
    			}
		}
		
		if(wl == 0)
			printf("You lose! \n");
		if(wl == 1)
			printf("You win! \n");
		printf("Play again?");
		scanf(" %c", &yn);
	}
}

/*Would you like to play a simplified version of the craps game? Enter y for yes or n for no:y
Roll 1
The sum of the two dice is 12
You lose!
Play again?y
Roll 1
The sum of the two dice is 6
Roll 2
The sum of the two dice is 8
Roll 3
The sum of the two dice is 7
You lose!
Play again?y
Roll 1
The sum of the two dice is 5
Roll 2
The sum of the two dice is 5
You win!
Play again?n
Game over.*/
