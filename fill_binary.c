#include "main.h"


/**
 * fill_binary - fill binary values to buffer.
 *
 * @buffer: buffer to be filled.
 * @value: number to be converted to binary.
 * @index: start position.
 * Return: last filled index.
 */

int fill_binary(char *buffer, int value, int index)
{
	char *bin;
	int len, i;

	len = len_bin(value);
	bin = malloc(sizeof(bin) * len);

	bin = NULL;
	bin = to_bin(value);

	for (i = 0; i < len; i++)
	{
		buffer[index] = bin[i];
		index++;
	}

	return (index);
}


/**
 * len_bin - gets length of binary number.
 *
 * @value: value to be checked.
 * Return: length of binary number.
 */

int len_bin(int value)
{
	int len;

	len = 0;

	while (value)
	{
		len++;
		value /= 2;
	}

	return (len);
}


/**
 * to_bin - converts decimal to binary;
 *
 * @value: decimal number to be converted.
 * Return: pointer to string containing binary.
 */

char *to_bin(int value)
{
	char *bin, *rev_bin;
	const char *bin_values = "01";
	int len, i, bit;


	len = len_bin(value);
	bin = malloc(sizeof(bin) * len);
	rev_bin = malloc(sizeof(rev_bin) * len);

	for (i = 0; i < len; i++)
	{
		bit = value % 2;
		bin[i] = bin_values[bit];
		value /= 2;
	}

	for (i = 0; i < len; i++)
	{
		rev_bin[i] = bin[(len - 1) - i];
	}

	return (rev_bin);
}
