#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c,b;

	for (c = 'a'; c <= 'z'; c++)
	{putchar(c);}
        for (b = 'A'; b <= 'Z'; b++)
	{putchar(b);}
	putchar('\n');
	return (0);
}
