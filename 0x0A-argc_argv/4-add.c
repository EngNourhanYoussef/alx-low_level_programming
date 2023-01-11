#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the addition of positive numbers
  * @argc: The number of arguments passed to the program.
  * @argv: An array of pointers to the arguments.
  *
  * Return: int
  */
int main(int argc, char *argv[])
{
	int num1, num2, sum;

	sum = 0;


	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2]; num2++)
		{
			if (argv[num1][num2] < '0' || argv[num1][num2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num1]);
	}
	printf("%d\n", sum);
	return (0);
}
