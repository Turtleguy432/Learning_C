/*
*for_test.c
*
*practice using for loops by printing the fibonacci series up until 100
*
*9-17-22
*
*Ashton Carlson
*
*Email: Turtleguy432@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int starting_num = 0; //The number that previous sum will add to, creating the next number in the Sequence
	int previous_sum = 1; //Takes fibon_next and adds it to the starting digit

	for (int Fibon_next = 0; Fibon_next < 100; starting_num = previous_sum, previous_sum = Fibon_next )
	 //Fibon_next is equal to the 2 previous numbers
	{
	 printf("%d\n",Fibon_next);
	 Fibon_next = starting_num + previous_sum;
	}


	return 0;
}