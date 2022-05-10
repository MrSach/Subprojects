#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    printf ("Size of data types in bytes...\n");
	printf ("\n");

	printf ("int = ");
	printf ("%zi", sizeof (int));
	printf ("\n");

	printf ("char = ");
	printf ("%zi", sizeof (char));
	printf ("\n");

	printf ("long = ");
	printf ("%zi", sizeof (long));
	printf ("\n");

	printf ("long long = ");
	printf ("%zi", sizeof (long long));
	printf ("\n");

	printf ("double = ");
	printf ("%zi", sizeof (double));
	printf ("\n");

	printf ("long double = ");
	printf ("%zi", sizeof (long double));
	printf ("\n");

	printf ("short = ");
	printf ("%zi", sizeof (short));
	printf ("\n");

	printf ("short int = ");
	printf ("%zi", sizeof (short int));
	printf ("\n");

	printf ("uint8_t = ");
	printf ("%zi", sizeof (uint8_t));
	printf ("\n");

	printf ("int8_t = ");
	printf ("%zi", sizeof (int8_t));
	printf ("\n");

	printf ("uint16t = ");
	printf ("%zi", sizeof (uint16_t));
	printf ("\n");

	printf ("int16t = ");
	printf ("%zi", sizeof (int16_t));
	printf ("\n");

	printf ("uint32t = ");
	printf ("%zi", sizeof (uint32_t));
	printf ("\n");

	printf ("int32t = ");
	printf ("%zi", sizeof (int32_t));
	printf ("\n");

	printf ("uint64t = ");
	printf ("%zi", sizeof (uint64_t));
	printf ("\n");

	printf ("int64t = ");
	printf ("%zi", sizeof (int64_t));
	printf ("\n");

	printf ("wchar_t = ");
	printf ("%zi", sizeof (wchar_t));
	printf ("\n");

    return 0;
}
