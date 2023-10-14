#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string of char
 * Return: 0 (String length)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/* string length will be used with _printf to get the length of the string */
