#include "main.h"

/**
 * int _strlen - returns length of a string
 * @s: an input string
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0');
	len++;
	return len;
}
