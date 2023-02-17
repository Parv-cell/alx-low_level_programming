#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: a program that prints all single
 * digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(n);
		n = n++;
	return (0);
}
