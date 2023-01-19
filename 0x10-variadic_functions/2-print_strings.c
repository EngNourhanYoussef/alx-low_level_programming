#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_strings - print string
  * @separator: the sympol separate the strings.
  * @n: the num. of strings passed to fn.
  * @...: strings should be printed
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;
	char *s;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", s);
		}
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
