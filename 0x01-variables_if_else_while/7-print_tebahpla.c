#include <stdio.h>

/**
  * main- Entry point
  * Description: Print alphabet in reverse
  * Return: Zero value
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
