#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdarg.h>
/**
  * struct printer - defining a printer
  * @c : data type
  * @print :prints a data type corresponding to symbol.
  */
typedef struct printer
{
	char *c;
	void (*print)(va_list arg);
} printer_t;

#endif
