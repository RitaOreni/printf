#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - prints input.
 *
 * @format: is a character string. The format string is composed of zero or more directives.
 * Return: number.
 */
int _printf(const char *format, ...)
{
	char *buffer;
	int buffer_len;
	va_list list, list2;

	va_start(list, format);
	va_copy(list2, list);

	buffer_len = buffer_length(format, &list2);
	buffer = malloc(sizeof(char *) * buffer_len);
	fill_buffer(buffer, format, &list);
	our_putchar(buffer, buffer_len);

	return (buffer_len);
}
