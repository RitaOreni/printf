#include "main.h"
#include <stdlib.h>

/**
 * fill_reverse_str - fills buffer with reversed string str.
 *
 * @buffer: buffer to be filled.
 * @str: string to be reversed.
 * @index: where to begin filling buffer.
 *
 * Return: last filled index of buffer by function
 * fill_reverse_str.
 */

int fill_reverse_str(char *buffer, char *str, int index)
{
	char *rev;
	int i, len;

	len = _strlen(str);
	rev = malloc(sizeof(rev) * len);

	for (i = 0; i < len; i++)
	{
		rev[i] = str[len - 1 - i];
	}

	for (i = 0; i < len; i++)
	{
		buffer[index] = rev[i];
		index++;
	}

	return (index);
}
