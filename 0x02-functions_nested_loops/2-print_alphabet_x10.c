#include "main.h"
/**
  * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
  */
void print_alphabet_x10(void)
{
	int i;
	char la;

	for (int i = 0; i <= 9; i++)
	{
		for (char la = 'a'; la <= 'z'; la++)
		{
			_putchar(la);
		}
	}
	_putchar('\n');
}
