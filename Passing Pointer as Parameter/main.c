#include <stdio.h>
#include <stdlib.h>

/*
	Description
		Demonstrates the C language approach to passing the pointer directly to a function.
		As the memory address is passed to the function instead of the value of the variable, the function has read-write access to the original data.
		Here there is a value, x, in the main function.
		When the memory address is passed into the function square_me, the value of x is multiplied by x.
		Changes to the value of x in the function are maintained upon returning to the function main.
		C does not support the use of ampersands in order to achieve pass by reference, so it needs to achieve the same result through the use of pointers instead.
		
*/

void square_me (int * x)
{
	* x *= * x;
}

int main()
{
	int x = 5;
	printf ("\nx = %d\n", x);
	square_me (& x);
	printf ("\nx = %d\n", x);
    return 0;
}
