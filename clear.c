/*clear.c
*
*test clearing the screen in code
*
*9/24/22
*
*Ashton Carlson
*
*Email:Turtleguy432@gmail.com
*/

#include <stdio.h>

int main(int argc, char *argv[]){
	
	for(int i = 0; i < 100; ++i)
		printf("\n");
	printf("The screen has been cleared");
	
	return 0;
}