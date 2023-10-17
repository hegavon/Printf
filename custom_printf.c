#include "main.h"

/**
 * print_char - Usedto print a character.
 * @c: The character to be printed.
 *
 * Return: Returns the number of characters printed.
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - Used to print a string.
 * @str: The string to print.
 *
 * Return: Returns the number of characters printed.
 */
int print_str(char *str)
{
	if (str == NULL)
		str = "(null)";
	return (write(1, str, _strlen(str)));
}

/**
 * _strlen - Used to calculate the length of a string.
 * @str: The string to measure.
 *
 * Return: Returns the length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _printf - A personal printf function that handles %c, %s, and %% specifiers.
 * @format: The format string.
 *
 * Return: Returns the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int chars_printed = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chars_printed++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				chars_printed += print_char(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				chars_printed += print_str(str);
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				chars_printed++;
			}
		}
		format++;
	}

	va_end(args);
	return (chars_printed);
}
