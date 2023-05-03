#include <unistd.h>
#include "main.h"

/**
 * our_putchar - prints on terminal ensures that only <= 1024 chars are printed.
 * @c: string to be filled.
 * @n: index.
 *
 * Return: Nothing.
 */

void our_putchar(char *c, int n)
{
	int len;


	len = _strlen(c);
	if (len <= 1024)
		write(1, c, n);
}
