#include "main.h"

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed
 *
 *Return: void that means success
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
