#include <stdio.h>

/**
 * main - C program that prints without printf and puts
 * return: 1 (Success)
 */

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59);
	return (1);
}
