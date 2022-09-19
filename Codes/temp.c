/*
*temp.c
*
*Convert farenheit 0-100 degrees in to celcius
*
*9-19-22
*
*Ashton Carlson
*
*Email:Turtleguy432@gmail.com
*/

#include <stdio.h>


int main(int argc, char* argv[]){
	//Declare and initialize Base values of Temperatures
	float faren = 0.0;
	float celsius = 0.0;
	
	printf("Farenheit\tCelsius\n");
	while(faren <= 100)
	{
		//Print Farenheit, convert to celcius, then increment
		printf("%3.1f\t\t",faren);
		celsius = faren / 1.8 + 32;
		printf("%3.1f\n", celsius );
		++faren;
	}

	return 0;
}