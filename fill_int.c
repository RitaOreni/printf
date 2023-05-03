#include "main.h"
#include <stdlib.h>

/**
 * fill_int - converts integer to string and fills
 * the strings onto buffer memory passed.
 *
 * @number: integer value passed to be filled.
 * @buffer: string to be filled with converted strings to int.
 * @index: index to begin filling from.
 * Return: last index value filled on buffer.
 */

int fill_int(char *buffer, int number, int index)
{
	char *str;
	const char *table = "0123456789";
	int rem, str_space, count, i, is_negative;

	rem = 0;
	count = 0;
	is_negative = 0;

	if (number < 0)
		is_negative = 1;

	str_space = int_length(number);
	str = malloc(sizeof(str) * str_space);
	number = number > 0 ? number : number * -1;

	while (number)
	{
		rem = number % 10;
		str[count] = table[rem];
		number /= 10;
		count++;
	}

	if (is_negative == 1)
		str[count] = '-';

	reverse_str(str, str_space);
	for (i = 0; i < str_space; i++)
	{
		buffer[index] = str[i];
		index++;
	}

	free(str);

	return (index);
}

/**
 * int_length - gets the number of digits making up an integer.
 *
 * @num: number to be scanned by length.
 * Return: number of digits.
 */

int int_length(int num)
{
	int num_digits, is_negative;

	is_negative = 0;
	if (num < 0)
		is_negative = 1;

	num_digits = 0;
	while (num)
	{
		num /= 10;
		num_digits++;
	}
	return (num_digits + is_negative);
}

/**
 * reverse_str - reverses string entered.
 * @str: string to be reversed.
 * @len: length of string.
 * Return: nothing
 */

void reverse_str(char *str, int len)
{
	char *temp;
	int i;

	temp = malloc(sizeof(temp) * len);

	for (i = (len - 1); i >= 0; i--)
	{
		temp[i] = str[(len - 1) - i];
	}


	for (i = 0; i < len; i++)
	{
		str[i] = temp[i];
	}

	free(temp);
}


















