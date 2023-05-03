#include "main.h"
#include <stdlib.h>

void reverse_uistr(char *str, int len);
int ui_length(unsigned int num);

/**
 * fill_ui - converts unsigned integer to string and fills.
 * the strings onto buffer memory passed.
 *
 * @number: integer value passed to be filled.
 * @buffer: string to be filled with converted strings to int.
 * @index: index to begin filling from.
 * Return: last index value filled on buffer.
 */

int fill_ui(char *buffer, unsigned int number, int index)
{
	char *str;
	const char *table = "0123456789";
	int rem, str_space, count, i;

	rem = 0;
	count = 0;

	str_space = ui_length(number);
	str = malloc(sizeof(str) * str_space);
	number = number > 0 ? number : number * -1;

	while (number)
	{
		rem = number % 10;
		str[count] = table[rem];
		number /= 10;
		count++;
	}

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
 * ui_length - gets the number of digits making up an integer.
 *
 * @num: number to be scanned by length.
 * Return: number of digits.
 */

int ui_length(unsigned int num)
{
	int num_digits;

	num_digits = 0;
	while (num)
	{
		num /= 10;
		num_digits++;
	}
	return (num_digits);
}

/**
 * reverse_uistr - reverses string entered.
 * @str: string to be reversed.
 * @len: length of string.
 * Return: nothing
 */

void reverse_uistr(char *str, int len)
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


















