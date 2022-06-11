#include <stdio.h>

/**
 *positive_or_negative - this function specifies when the value is either positive or negative
 *
 * and if it is positive, negative, or zero
 * and if it is positive, negative, or zero*
 * and if it is positive, negative, or zero* Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is positive\n", i);
	}

}
