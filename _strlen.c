#include "main.h"

/**
 * _strlen - counts the number of items in string.
 *
 * @str: string whose total number of characters to be counted.
 * Return: length of string.
 */

int _strlen(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
