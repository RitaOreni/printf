#include <unistd.h>

/**
 * our_putchar - prints on terminal.
 * @c: string to be filled.
 * @n: index.
 *
 * Return: Nothing.
 */

void our_putchar(char *c, int n)
{
	write(1, c, n);
}
