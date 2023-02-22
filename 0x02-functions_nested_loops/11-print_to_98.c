#include "main.h"
/**
 * print_to_98 - print from n to ninety eight
 * @n: number to start from
 */
void print_to_98(int n)
{
	int k;

	for (k = n; k <= 98; k++)
		_putchar(k + '0');
}
