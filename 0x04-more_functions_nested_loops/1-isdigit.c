#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - Check if paramter c represents a digit.
 * @c: Int representing a digit
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
