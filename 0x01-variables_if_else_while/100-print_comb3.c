#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
int i;	
int j;
for (i = 0; i <= 9; i++)

{

for (j = 0; j <= 9; j++)

{
{

if (j > i)

{

putchar(i + '0');

putchar(j + '0');

if (i != 7 || j != 8)

{

putchar(',');

putchar(' ');

}

}

}

}

}



putchar('\n');

return (0);

}
