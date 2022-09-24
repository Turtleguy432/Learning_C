#include <stdio.h>

#define LEFT '1'
#define RIGHT '2'
#define UP '3'
#define DOWN '4'
#define QUIT '5'

int main(int argc, char* argv){

	int choice;
	printf("Pick a Direction using the corresponding number.\n1. Left\n2. Right\n3.UP\n4.Down\n5. Quit");
	while((choice=getchar()) != EOF){

		switch(choice){

			case LEFT : {
				printf("Left\n");
				break;
			} 
			case RIGHT : {
				printf("Right\n");
				break;
			}
			case UP : {
				printf("up\n");
				break;
			}
			case DOWN : {
				printf("DOWN\n");
				break;
			}
			case QUIT : 
				return 0;
			default :
				printf("That's not an option, try again.\n");
				break;

		}
	}

	return 0;


}