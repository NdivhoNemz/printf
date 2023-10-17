#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @string: string of char
 * Return: 0 (String length)
 */

int _strlen(char *string)
{
	int length = 0;

	while (*string != '\0')
	{
		length++;
		string++;
	}
	return (length);
}
