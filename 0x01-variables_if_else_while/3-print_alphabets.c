#include <stdio.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c = 'a'; 
	char b = 'A';
	for (c <= 'z')
	{
		putchar(c);
		c++;
	}
        while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
