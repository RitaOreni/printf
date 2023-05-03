#include "main.h"
#include <stdarg.h>

/**
 * fill_buffer - fills buffer.
 * @buffer: buffer to fill.
 * @format: format needed.
 * @_list: our list.
 * Return: Nothing.
 */

void fill_buffer(char *buffer, const char *format, va_list *_list)
{
	int count, index;
	va_list list;

	count = 0;
	index = 0;
	va_copy(list, *_list);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == 's')
			{
				index += 2;
				count = fill_str(buffer, va_arg(list, char *), count);
			}
			else if (format[index + 1] == 'c')
			{
				index += 2;
				count = fill_char(buffer, (va_arg(list, int) - '0'), count);
			}
			else if	(format[index + 1] == 'd' || format[index + 1] == 'i')
			{
				index += 2;
				count = fill_int(buffer, va_arg(list, int), count);
			}
			else if (format[index + 1] == 'b')
			{
				index += 2;
				count = fill_binary(buffer, va_arg(list, int), count);
			}
			else if (format[index + 1] == 'r')
			{
				index += 2;
				count = fill_reverse_str(buffer, va_arg(list, char *), count);
			}
			else if (format[index + 1] == 'u')
			{
				index += 2;
				count = fill_ui(buffer, va_arg(list, unsigned int), count);
			}
			else if (format[index + 1] == 'x' || format[index + 1] == 'X')
			{
				index += 2;
				count = fill_hex(buffer, va_arg(list, unsigned int), count);
			}
			else if (format[index + 1] == 'o')
			{
				index += 2;
				count = fill_octal(buffer, va_arg(list, unsigned int), count);
			}
			else if (format[index + 1] == '%')
			{
				index += 3;
				buffer[count] = '%';
			}
			else
			{

				buffer[count] = format[index];
				count++;
				index++;
			}
		}
		else
		{
			buffer[count] = format[index];
			count++;
			index++;
		}
	}
}
