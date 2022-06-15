#include "main.h"
#include <stdio.h>
/**
 * _puts - puts a string
 *
 * @str: string to print
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

