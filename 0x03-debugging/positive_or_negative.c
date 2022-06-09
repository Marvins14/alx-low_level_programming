#include <stdio.h>
/**
 *positive_or_negative - this function specifies when the value is either positive or negative
 *
 * and if it is positive, negative, or zero
 * and if it is positive, negative, or zero*
 * and if it is positive, negative, or zero* Return: 0
 */

void positive_or_negative(int n)
{
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is positive\n", n);
	}

}
