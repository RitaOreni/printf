#include "main.h"


/**
 * fill_octal - fill binary values to buffer.
 *
 * @buffer: buffer to be filled.
 * @value: number to be converted to hexadecimal number.
 * @index: start position.
 * Return: last filled index.
 */

int fill_octal(char *buffer, unsigned int value, int index)
{
	char *octal;
	int len, i;

	len = len_octal(value);
	octal = malloc(sizeof(octal) * len);
	octal = NULL;
	octal = to_octal(value);

	for (i = 0; i < len; i++)
	{
		buffer[index] = octal[i];
		index++;
	}

	return (index);
}


/**
 * len_octal - gets length of binary number.
 *
 * @value: value to be checked.
 * Return: length of binary number.
 */

int len_octal(unsigned int value)
{
	int len;

	len = 0;

	while (value)
	{
		len++;
		value /= 8;
	}

	return (len);
}


/**
 * to_octal - converts decimal to binary;
 *
 * @value: decimal number to be converted.
 * Return: pointer to string containing binary.
 */

char *to_octal(unsigned int value)
{
	char *octal, *rev_octal;
	const char *octal_table = "01234567";
	int len, i;
	unsigned int octal_value;


	len = len_octal(value);
	octal = malloc(sizeof(octal) * len);
	rev_octal = malloc(sizeof(rev_octal) * len);

	for (i = 0; i < len; i++)
	{
		octal_value = value % 8;
		octal[i] = octal_table[octal_value];
		value /= 8;
	}

	for (i = 0; i < len; i++)
	{
		rev_octal[i] = octal[(len - 1) - i];
	}

	return (rev_octal);
}
