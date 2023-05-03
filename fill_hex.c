#include "main.h"


/**
 * fill_hex - fill hexadecimal values to buffer.
 *
 * @buffer: buffer to be filled.
 * @value: number to be converted to hexadecimal number.
 * @index: start position.
 * Return: last filled index.
 */

int fill_hex(char *buffer, unsigned int value, int index)
{
	char *hex;
	int len, i;

	len = len_hex(value);
	hex = malloc(sizeof(hex) * len);
	hex = NULL;
	hex = to_hex(value);

	for (i = 0; i < len; i++)
	{
		buffer[index] = hex[i];
		index++;
	}

	return (index);
}


/**
 * len_hex - gets length of hex number.
 *
 * @value: value to be checked.
 * Return: length of binary number.
 */

int len_hex(unsigned int value)
{
	int len;

	len = 0;

	while (value)
	{
		len++;
		value /= 16;
	}

	return (len);
}


/**
 * to_hex - converts decimal to hexadecimal;
 *
 * @value: decimal number to be converted.
 * Return: pointer to string containing hexadecimal.
 */

char *to_hex(unsigned int value)
{
	char *hex, *rev_hex;
	const char *hex_table = "0123456789ABCDEF";
	int len, i;
	unsigned int hex_value;


	len = len_hex(value);
	hex = malloc(sizeof(hex) * len);
	rev_hex = malloc(sizeof(rev_hex) * len);

	for (i = 0; i < len; i++)
	{
		hex_value = value % 16;
		hex[i] = hex_table[hex_value];
		value /= 16;
	}

	for (i = 0; i < len; i++)
	{
		rev_hex[i] = hex[(len - 1) - i];
	}

	return (rev_hex);
}
