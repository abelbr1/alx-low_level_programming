#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all arguments it receives.
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments.
 * Return: 0 - Success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
