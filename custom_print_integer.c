#include "main.h"

/**
 * write_to_console - To print an integer.
 * @num: The integer to print.
 *
 * Return: The number of characters printed.
 */
int write_to_console(int num)
{
	int chars_printed = 0;

	if (num < 0)
	{
		chars_printed += output_char('-');
		num = -num;
	}
	if (num == 0)
	{
		chars_printed += output_char('0');
	}
	else
	{
		char buffer[20];
		int i = 0;

		while (num > 0)
		{
			buffer[i++] = '0' + num % 10;
			num /= 10;
		}
		while (i > 0)
		{
			chars_printed += output_char(buffer[--i]);
		}
	}
	return (chars_printed);
}
