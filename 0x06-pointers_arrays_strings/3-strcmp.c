#include "main.h"
/**
 * _strcmp - Compares pointers to  two strings
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return:0, if the s1 and s2 are equal;
 * a negative value if s1 is less than s2;
 * a positive value if s1 is greater than s2.
 *
 */
int _strcmp(char *s1, char *s2)
{
	while
		((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
