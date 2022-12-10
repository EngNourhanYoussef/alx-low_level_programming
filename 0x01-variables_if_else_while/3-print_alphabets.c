#include <stdio.h>
/**
  * main - main block
  * Description:  prints the alphabet in lowercase,
  * and then in uppercase, followed by a new line.
  * Return: 0
   */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
