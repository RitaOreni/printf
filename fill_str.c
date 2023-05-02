#include "main.h"

/**
 * fill_str - fills n bytes of string @str onto @buffer starting
 * from @index.
 *
 * @str: string to be filled to buffer starting from @index.
 * @buffer: pointer to string to be filled.
 * @index: integer denoting where to start filling.
 *
 * Return: index after the last item filled.
 */

int fill_str(char *buffer, char *str, int index)
{
	int len, n;

	len = 0;
	len = _strlen(str);

	for (n = 0; n < len; n++)
	{
		buffer[index] = str[n];
		index++;
	}
	return (index);

}
