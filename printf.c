#include "main.h"
#include <stdarg.h>
/**
  * print_ident - function to print identifiers
  * @letter: character after %
  * Return: number of characters to be printed.
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

