#include "main.h"
/**
  * print_last_digit - a function that prints the last digit of a number.
  *
  * @d: the digit shoud be printed
  *
  * Return: last digit from input no.
  */
int print_last_digit(int d)
{
	int i = d % 10;

	if (i < 0)
	{
		i * = -1;
	}
	_putchar(i + '0');
	return (i);
}
