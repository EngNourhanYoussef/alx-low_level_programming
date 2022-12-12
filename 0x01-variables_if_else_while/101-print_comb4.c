#include <stdio.h>
/**
  * main - Prints all possible combinations of three different digits
  * Return: Always 0.
  */
int main(void)
{
	int h, t, o;

	for (h = 0; h < 8; h++)
	{
		for (t = h + 1; t <= 8; t++)
		{
			for (o = t + 1; o <= 9; o++)
			{
				putchar((h % 10) + '0');
				putchar((t % 10) + '0');
				putchar((o % 10) + '0');
				if (h == 7 && t == 8 && o == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
