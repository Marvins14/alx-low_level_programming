#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: empty output
 */
void times_table(void)
{
<<<<<<< HEAD
<<<<<<< HEAD
	int (a; b; c; d; e)
=======
	int x, y, z, u, d;
>>>>>>> 90902fce664a35e0fbce83969a68832fdafcf076

	for (x = 0; x <= 9; x++)
	{
<<<<<<< HEAD
	for (a = 0; a <= 9; a++)
	for (b = 0; b <= 9; b++)
=======
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
>>>>>>> 90902fce664a35e0fbce83969a68832fdafcf076
=======
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
>>>>>>> 90902fce664a35e0fbce83969a68832fdafcf076

			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

					_putchar(z + '0');
			}
		}
<<<<<<< HEAD
<<<<<<< HEAD
	}

		_putchar('\n')
=======
=======
>>>>>>> 90902fce664a35e0fbce83969a68832fdafcf076
		_putchar('\n');
	}
>>>>>>> 90902fce664a35e0fbce83969a68832fdafcf076
}
