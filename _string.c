#include <unistd.h>

/**
 * _string - a function that prints out a string.
 * @str: pointer to a string
 * Return: string(void)
 */

void _string(const char *str)
{
    if (str != NULL)
    {
        size_t length = 0;
        while (str[length] != '\0')
	{
            length++;
        }
        write(1, str, length);
    }
}
