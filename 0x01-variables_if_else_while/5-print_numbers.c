#include <stdio.h>
/**
 * a program that prints all single digit numbers of base 10 starting from 0
 * main - entry point
 * return: always 0(success)
 **/
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
	printf("%d", a);
	putchar('\n');
	return (0);
}
