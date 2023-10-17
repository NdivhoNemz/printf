#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @string: string of char
 * Return: 0
 */

int _strlen(char *string)
{
        int length = 0;

        while (string[length] != '\0')
        {
                length++;
        }
        write(1, string, length);
        return (length);
}
