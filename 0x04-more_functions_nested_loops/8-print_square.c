#include "main.h"

/**
  * print_square - Prints n squares according n number of times
  * @n: The number of squares/number of times
  *
  * Return: empty
  */
void print_square(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			for (d = 0; d < n; d++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
