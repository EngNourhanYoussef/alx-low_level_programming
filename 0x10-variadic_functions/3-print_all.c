#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
  * print_char - print a char
  * @arg: list of char
  */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}
/**
  * print_int - Prints an int.
  * @arg: list of int
  */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}
/**
  * print_float - Prints a float.
  * @arg: list of float
  */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}
/**
  * print_string - Prints a string.
  * @arg: list
  */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
  * print_all - Prints anything, followed by a new line.
  * @format: A string of characters representing the argument types.
  * @...: A variable number of arguments to be printed.
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, y = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(args, format);
	while (format && (*(format + x)))
	{
		y = 0;
		while (y < 4 && (*(format + x) != *(funcs[y].c)))
		{
			y++;
		}
		if (y < 4)
		{
			printf("%s", separator);
			funcs[y].print(args);
			separator = ", ";
		}
		x++;
	}
	printf("\n");
	va_end(args);
}
