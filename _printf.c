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
		if (functs[i].type[0] == letter)
			return (functs[i].f(args))
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
	int identifierPrinted = 0, charPrinted = 0;
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
		identifierPrinted = printident(format[i + 1], arg);
		if (identifierPrinted == -1 || identifierPrinted != 0)
			i++;
		if (identifierPrinted > 0)
			charPrinted += identifierPrinted;
		if (identifierPrinted == 0)
		{
			_putchar('%');
			charPrinted++;
		}
	}
	va_end(args);
	return (charPrinted);
}
