#include "stdio.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{

	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * puts_half - prints the second half of the string
 * @str: string
 */

void puts_half(char *str)
{
	int len1, x, half;

	len1 = _strlen(str);
	half = (len1 % 2 == 0) ? len1 / 2 : (len1 - 1) / 2 + 1;

	for (x = half; x < len1; x++)
		_putchar(*(str + x));

	_putchar('\n');
}
