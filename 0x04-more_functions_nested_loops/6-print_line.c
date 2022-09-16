#include  "main.h"

/**
 * print_line - prints line that is n long
 * @n: length of line
 *
 * REturn: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
