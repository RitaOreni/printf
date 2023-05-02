#include "main.h"

/**
 * fill_char - fills a character to string @buffer.
 *
 * @buffer: string where character @ch is to be added at @index.
 * @ch: character to be filled to buffer.
 * @index: index to fill with @ch.
 *
 * Return: Nothing.
 */

int fill_char(char *buffer, int ch, int index)
{
	char _char;

	_char = '0' + ch;
	buffer[index] = _char;
	return (index + 1);
}


