#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list arg);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);



/**
  * struct ident - struct
  *
  *
  */
typedef struct ident
{
	char *type;
	int (*f)(va_list);
};



#endif /* _MAIN_H */
