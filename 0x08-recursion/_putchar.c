#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: the character to print 
 *
 * Return : On sucess 1.
 * on erro, -1 is returned, and  errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
