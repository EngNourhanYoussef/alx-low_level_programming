#include "main.h"
/**
  * print_most_numbers - Print the numbers since 0 up to 9 without 2 , 4
  *
  * Return: The numbers since 0 up to 9
  */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		else
			_putchar(n + '0');
	}
	_putchar('\n');
}
