#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
  * print_char - writes the character c to stdout.
  * @arg: arguments.
  * Return: On success 1, on error -1
  */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
/**
  * int print_str - prints a string starting with an "s" lowercase 
  * @arg: argument.
  * Return: number of character printed.
  */
int print_str(va_list args)
{
	int i;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

