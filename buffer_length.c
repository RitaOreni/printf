#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * buffer_length - gets the length of buffer.
 * @format:  format.
 * @_list: passed list.
 * Return: length.
 */


int buffer_length(const char *format, va_list *_list)
{
	int index, count, len;
	va_list list;

	va_copy(list, *_list);
	index = 0;
	count = 0;
	len = 0;

	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == 's')
			{
				len += _strlen(va_arg(list, char *));
				index += 2;
			}
			else if (format[index + 1] == 'c')
			{
				len += 1;
				index += 2;
			}
			else if	(format[index + 1] == 'd' || format[index + 1] == 'i')
			{
				len += int_length(va_arg(list, int));
				index += 2;
			}
			else if (format[index + 1] == '%')
			{
				len += 1;
				index += 2;
			}
			else if (format[index + 1] == 'r')
			{
				len += _strlen(va_arg(list, char *));
				index += 2;
			}
			else if (format[index + 1] == 'b')
			{
				len += len_bin(va_arg(list, int));
				index += 2;
			}
			else if (format[index + 1] == 'u')
			{
				len += ui_length(va_arg(list, unsigned int));
				index += 2;
			}
			else if (format[index + 1] == 'x' || format[index + 1] == 'X')
			{
				len += len_hex(va_arg(list, unsigned int));
				index += 2;
			}
			else if (format[index + 1] == 'o')
			{
				len += len_octal(va_arg(list, unsigned int));
				index += 2;
			}
			else if	(format[index + 1] == '%')
			{
				len += 1;
				index += 2;

			}
			else
			{
				count++;
				index++;
			}
		}
		else
		{
			count++;
			index++;
		}
	}
	va_end(list);
	return (count + len);
}
