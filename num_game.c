/*
*num_7.c
*
*Guess the lucky number game
*
*9-19-22
*
*Ashton Carlson 
*
*Email:Turtleguy432@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
	srand(time(NULL));

	int guess = 0;
	int input = 0;
	int lucky = rand()%9 + 1;
	//Take user input as an int value
	printf("Enter a number from 1-10:\n");



	while(guess < 3)
	{
		++guess;
		scanf("%d", &input);

		//Check input for the random number
		(input == lucky) ? printf("You put in the right number! YAY!\n") : printf("Nope try again.\n");

		//End game if max number of attempts is reached
		if (guess == 3)
			printf("Too many attempts, the number was %d. You lose\n", lucky);
		if (input == lucky)
			break;	
	}
	
	return 0;
}