#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void reverse_string (const char input [], char result [])
{
	int input_length = strlen (input);
	int i = 0;
	for (; i < input_length; ++i)
	{
		result [(input_length - 1) - i] = input [i];
	}
	result [i] = '\0';
}

int main()
{
	printf ("Enter a string to reverse: ");
	char test1a [200];
	scanf ("%s", test1a);
	char test1b [strlen(test1a)];
	reverse_string (test1a, test1b);
	printf ("\ntest1a = %s\n", test1a);
	printf ("reversed = %s\n", test1b);

    return 0;
}
