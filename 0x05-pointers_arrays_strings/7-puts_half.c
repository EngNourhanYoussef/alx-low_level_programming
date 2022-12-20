#include "main.h"
/**
  * puts_half - Prints out the first half of a string.
  * @str: input string to print.
  */
void puts_half(char *str)
{
	int len = 0;
	int inx;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		inx = len / 2;
	else
		inx = (len + 1) / 2;
	while (inx < len)
	{
		_putchar(str[inx];
		inx++;
	}
	_putchar('\n')
}
