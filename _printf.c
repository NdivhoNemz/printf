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
	int num_of_characters = 0; /* count begins at '0' */

	va_list add_arguments; /* initialise space for additonal arguements */

	if (format == NULL) /* sets conditon for invalid data */
	{
		return (-1); /* return error */
	}

	va_start(add_arguments, format); /* recieves additional arguments */

	while (*format) /* inspects character string one at a time (parsing) */
	{
		if (*format != '%') /* if not % then write in standard output*/
		{
			write(1, format, 1); /* output char, reserve 1 byte */
			num_of_characters++; /* output next valid character */
		}

		else /* if it is % */
		{
			format++; /* skip to check next character in string*/
			if (*format == '\0') /* character marks end of a string */
			{
				write(1, "%", 1); /* if '%' ends string */
				break; /* stops while loop */
			}
			if (*format == 'c') /* if next character after '%' is 'c' */
			{
				char character = va_arg(add_arguments, int);
				/* character variable stores a character */
				/* int used as second argument to va_arg */
				write(1, &character, 1);
				num_of_characters++;
			}
			else if (*format == 's')
			{
				char *string = va_arg(num_of_characters, char*);
				/* string variable stores a string */
				/* char* as the second argument to va_arg */
				/* string represented as a pointer in c */
				int _strlen = 0; /* _strlen decl & initi */

				/* Calculate string length */
				while (string[_strlen] != '\0')
				{
					_strlen++;
				}
				/* writes string to std output */
				write(1, string, _strlen);
				num_of_characters += _strlen;
				/* num_of_characters = string length */
			}
			else if (*format == '%') /* double %% */
			{
				write(1, format, 1);
				num_of_characters++;
			}
		}
		format++;
	}
	va_end(add_arguments);

	return (num_of_characters);
}
