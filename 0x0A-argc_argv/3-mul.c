#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry point
  * @argc:int
  * @argv:string
  */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;
		printf("%d\n", x);
	}
	return (0);
}
