#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#define TEMPNAME "tempfile.txt"
#define FPATH "testfile2.txt"

int main()
{
	FILE * rfile = NULL;
	rfile = fopen (FPATH, "r");
	if (rfile == NULL)
	{
		printf ("Error opening file to read\n");
		return -2;
	}
	FILE * wtemp = NULL;
	wtemp = fopen (TEMPNAME, "w");
	if (wtemp == NULL)
	{
		printf ("Error opening temp file to write\n");
		return -2;
	}

	size_t ch = 0;

	for (; (ch = fgetc (rfile)) != EOF; )
	{
		size_t oc = 0;
		(islower (ch)) ? (oc = toupper (ch)) : (oc = ch);
		printf ("%i ", oc);
		fputc (oc, wtemp);
	}



	fclose (rfile);
	fclose (wtemp);

	rfile = NULL;
	wtemp = NULL;

	remove (FPATH);
	rename (TEMPNAME, FPATH);

    return 0;
}
