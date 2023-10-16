#include "main.h"

/**
 * print_char - Print a character.
 * @c: The character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(char c)
{
	return write(1, &c, 1);
}

/**
 * print_str - Print a string.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_str(char *str)
{
	if (str == NULL)
		str = "(null)";
	return write(1, str, _strlen(str));
}

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

/**
 * _printf - A custom printf function that handles %c, %s, and %% specifiers.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;
	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed_chars++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						char c = va_arg(args, int);
						printed_chars += print_char(c);
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);
						printed_chars += print_str(str);
						break;
					}
				case '%':
					{
						write(1, "%", 1);
						printed_chars++;
						break;
					}
				default:
					break;
			}
		}
		format++;
	}

	va_end(args);

	return printed_chars;
}
