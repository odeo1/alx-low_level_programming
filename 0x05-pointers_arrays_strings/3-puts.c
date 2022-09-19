#include "main.h"

/**
 * _put - prints string
 * @str: string
 * Return: void
 */

void _put(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
