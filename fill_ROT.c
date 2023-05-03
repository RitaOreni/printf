#include "main.h"
#include <stdlib.h>

/**
 * fill_ROT - fills buffer with ROT13'ed string.
 *
 * @str: string to be ROT13'ed.
 * @buffer: string to be filled with str.
 * @index: where to be begin filling buffer.
 * Return: integer showing to continue filling.
 */

int fill_ROT13(char *buffer, char *str, int index)
{
	int len, i;

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		buffer[index] = str[i];
		index++;
	}

	return (index);
}

/**
 * _rot13 - encodes string into ROT13.
 *
 * @str: string to be ROT'ed.
 * Return: Nothing.
 */

void  _rot13(char *str)
{
	int len, i;

	len =  _strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + (str[i] - 'A' + 13) % 26;
		}
		else if (str[i] >= 'a' &&  str[i] <= 'z')
		{
			str[i] = 'a' + (str[i] - 'a' + 13) % 26;
		}
	}
}
