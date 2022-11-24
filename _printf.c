#include "main.h"
#include <stdlib.h>
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
		{"s", print_str},
		{NULL, NULL}
	};

	for (i = 0; funct[i].type != NULL; i++)
	{
		if (funct[i].type[0] == letter)
			return (funct[i].f(args));
	}
	return (0);
}
/**
  * _printf - customized printf
  * @format: character string.
  * Return: number of characters to be printed.
  */
int _printf(const char *format, ...)
{
	unsigned int i;
	int identifier = 0, charPrinted = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			charPrinted++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			 _putchar('%');
			 charPrinted++;
			 i++;
		 continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		identifier = print_ident(format[i + 1], args);
		if (identifier == -1 || identifier != 0)
			i++;
		if (identifier > 0)
			charPrinted += identifier;
		if (identifier == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(args);
	return (charPrinted);
}
