#include "main.h"

/**
  * times_table - Prints the 9 times table, starting with 0.
  */
void times_table(void)
{
	int num1, num2, res;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');
			res = num1 * num2;

			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
	_putchar('\n');
	}
}


