#include "main.h"
#include "6-abs.c"
#include "0-putchar.c"
/**
 * print_last_digit - prints last digit of a number
 * @n: the parameter
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;
	n = _abs(n);
	last_digit = n % 10;
	_putchar(last_digit);

	return (last_digit);
}
