#include <unistd.h>

/**
 * _putchar - write the characterc to stdout
 * @c: the character to print
 * return: On success 1.
 * on erro, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
	
			}
