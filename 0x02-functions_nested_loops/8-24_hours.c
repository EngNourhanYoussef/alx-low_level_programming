#include "main.h"
/**
  * jack_bauer - prints time table in this format: HH:MM
  * Return: No return here just print.
  */
void jack_bauer(void)
{
	for (int h = 0; i <= 23; i++)
	{
		for (int m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
