#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


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
