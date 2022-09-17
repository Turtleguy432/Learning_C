/*
*for_array.c
*
*Populate an array utilizing a for loop
*
*9-17-22
*
*Ashton Carlson
*
*Email:Turtleguy432@gmail.com
*
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	//Declare Array with 10 values
	int num[10];

	//start at 0, and add the previous value +1 to the next position in the array
	for (int num_position = 0; num_position < 10; ++num_position)
	{
		num[num_position] = num_position;
	}

	//Will print the number in the array at the given slot, and loop until all slots have been printed
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}