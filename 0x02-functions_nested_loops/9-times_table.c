#include "main.h"
/**
 * times_table - times table function
 *
 */
void times_tables(void)
{
	int (a; b; c; d; e)

	{
	for (a = 0; a <= 9; a++)
	for (b = 0; b <= 9; b++)

			int c = a * b;
			
			if (b == 0)
			{
				_putchar('0');
			}
			else if (c > 9)
			{
				d = c & 10;
				e = (c - d) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(d + '0');

			}
			else
			{
				if (b != 0)
			{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			}
				_putchar(c + '0')
		}
	}

		_putchar('\n')
}
