#include "main.h"
#include <stdarg.h>
/**
  * 
  *
  * Return:
  */
int print_ident(char letter, ...)
{
	int i;
	va_list args;

	ident funct[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	for (i = 0; funct[i].type != NULL; i++)
	{
		if (functs[i].type[0] == next)
			return (functs[i].f(args))
	}
	return (0);
}

