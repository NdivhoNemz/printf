#include "main.h"

/**
 * _printf - This function returns an integer and takes at least one argument.
 * @format: a constant character pointer.
 * ... - function can take a variable number of additional arguments.
 * Return: number of characters printed to the standard output
 * otherwise -1.
 */
int _printf(const char *format, ...)
{
	va_list add_arguments;
	int num_of_characters = 0;

	if (format == NULL) /* sets conditon for invalid data */
	{
		return (-1);
	}
	va_start(add_arguments, format);
	while (*format)
	{/* If not format specifier, prints the '%' character. */
		if (*format != '%')
		{
			num_of_characters += _putchar(*format);
		}
		else
		{/* skip to check next character in string */
			format++;
			switch (*format)
			{
				case 'c':/* Handle character format specifier*/
				num_of_characters += _putchar(va_arg(add_arguments, int));
					break;
				case 's':/* Handle string format specifier. */
				num_of_characters += _strlen(va_arg(add_arguments, char *));
					break;
				case '\0':/* Handle '%' at the end of string */
				num_of_characters += _putchar('%');
					break;
				case '%':/*Handle '%%' as a literal '%' */
				num_of_characters += _putchar('%');
					break;
				default:/* unsupported specifier prints '%' */
				num_of_characters += _putchar('%');
				format--;/* Move back to unsupported*/
					break; }
		}
		format++; /* Move to the next character in the format string */
	}
	va_end(add_arguments);
	return (num_of_characters);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * _strlen - a function that returns the length of a string.
 * @string: string of char
 * Return: 0 (String length)
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
