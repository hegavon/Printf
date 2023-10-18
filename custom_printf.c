#include "main.h"

/**
 * custom_printf - A custom printf function that handles %c, %s, %% specifiers.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int custom_printf(const char *format, ...)
{
	int chars_printed = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			chars_printed += output_char(*format);
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				chars_printed += output_char(va_arg(args, int));
			} else if (*format == 's')
			{
				chars_printed += output_str(va_arg(args, char *));
			} else if (*format == 'd' || *format == 'i')
			{
				chars_printed += write_to_console(va_arg(args, int));
			} else if (*format == '%')
			{
				chars_printed += output_char('%');
			}
		}
		format++;
	}

	va_end(args);
	return (chars_printed);
}
