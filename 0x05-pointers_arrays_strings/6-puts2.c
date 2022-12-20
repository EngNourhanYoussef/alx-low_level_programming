#include "main.h"
/**
  * puts2 - Prints out every other char of the string.
  * @str: input string to print.
  */
void puts2(char *str)
{
	int inx;

	while (str[inx] != '\0')
	{
		if (inx % 2 == 0)
			_putchar(str[inx]);
		inx++;
	}
	_putchar('\n');
}
