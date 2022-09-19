/*
*list.c
*
*Print a list with one less digit each pass
*
*9-19-22
*
*Ashton Carlson
*
*Email:Turtleguy432@gmail.com
*/

#include <stdio.h>

int main(int argc, char* argv[]){
	
	for (int x = 0; x <= 10; ++x)
	{
		printf("%d  ", x);

		//Turn y in to x, and print from y to 10 
		for (int y = x; y <= 10; y++)
			printf("%d  ", y);
		
		printf("\n");
	}

	return 0;
}