#include <stdio.h>
/**
  * main - Prints all possible combinations of two two-digit numbers,
  * Return: Always 0.
  */
int main(void)
{
	int f_digits, s_digits;

	for (f_digits = 0; f_digits <= 98; f_digits++)
	{
		for (s_digits = f_digits + 1; s_digits <= 99; s_digits++)
		{
			putchar((f_digits / 10) + '0');
			putchar((f_digits % 10) + '0');
			putchar(' ');
			putchar((s_digits / 10) + '0');
			putchar((s_digits % 10) + '0');
			if (f_digits == 98 && s_digits == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
