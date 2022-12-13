#include "main.h"
/**
  * print_alphabet - prints lowercase alphabets
  *
  * main - Entry point
  *
  * Return: Always 0.
  */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}
	_putchar('\n')
}
