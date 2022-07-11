#include "stdio.h"

/**
 * _strlen - returns the length of string
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
 * puts2 - prints one char out of 2 of a string
 *
 * @str: string str
 */
void puts2(char *str)
{
	int x;
	int size = _strlen(str);

	for (x = 0; x < size; x += 2)
		_putchar(*(str + x));

	_putchar('\n');
}
