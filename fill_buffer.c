#include "main.h"
#include <stdarg.h>

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