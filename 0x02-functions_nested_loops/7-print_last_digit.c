#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the parameter
 * Return: the last digit
 */
int print_last_digit(int n)
{
	n = _abs(n);
	int last_digit = n % 10;

	return (last_digit);
}
