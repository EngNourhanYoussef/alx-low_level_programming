#include <stdio.h>
/**
  * main- Entry point
  *
  * Description: Print numbers from 0 to 9 separated by comma and space
  * Return: Zero value
  */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

		putchar('\n');
		return (0);
}
