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
for (j = 1; j <= 9; j++)
{
{
if (j > i)
{
putchar(i + '0');
putchar(j + '0');
if (i != 0 || j != 0)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
