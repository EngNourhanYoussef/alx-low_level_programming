#include "main.h"
/**
  * more_numbers - Print 10 times the numbers since 0 up to 14
  * Description: Prints the numbers 10 times from 0 to 14
  * Return: the number from 0 to 14 10 times
  */
void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
