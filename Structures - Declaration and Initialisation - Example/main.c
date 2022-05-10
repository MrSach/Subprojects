#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char * name;
	char * hire_date;
	double wage;
};

//Used for inputting employee information through the terminal
void employee_reg (struct employee * const e)
{
	//Declare string buffer
	char * temp_str [100];

	//Prompt for employee name
	printf ("\nEnter employee name: ");
	fgets (temp_str, 101, stdin);
	for (char * tp = temp_str; * tp != '\0'; ++tp)
	{
		printf ("%c", * tp);
		if (* tp == '\n')
		{
			* tp = '\0';
		}
	}

	e->name = (char *) malloc ((sizeof (char) * strlen (temp_str)) + 1);
	strcpy (e->name, temp_str);

	//Prompt for employee date
	printf ("\nEnter employee hire date: ");
	fgets (temp_str, 101, stdin);
	for (char * tp = temp_str; * tp != '\0'; ++tp)
	{
		printf ("%c", * tp);
		if (* tp == '\n')
		{
			* tp = '\0';
		}
	}
	e->hire_date = (char *) malloc ((sizeof (char) * strlen (temp_str)) + 1);
	strcpy (e->hire_date, temp_str);

	//Prompt for employee wage
	printf ("\nEnter employee wage: ");
	double temp_float = 0.0;
	scanf ("%lf", & temp_float);
	e->wage = temp_float;
}

void display_employee (struct employee * const e)
{
	printf ("\nDisplaying employee data...\n");
	printf ("Name = %s\n", e->name);
	printf ("Date = %s\n", e->hire_date);
	printf ("Salary = %.2lf\n\n", e->wage);
}

int main()
{
	struct employee e1 = {{"Employee_1"}, {"25/5/2021"}, 25225.68};
	struct employee e2;
	employee_reg (& e2);

	display_employee (& e1);
	display_employee (& e2);

	free (e2.name);
	free (e2.hire_date);

    return 0;
}
