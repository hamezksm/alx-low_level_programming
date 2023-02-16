#include <unistd.h>

/**
 * main - C program that prints without printf and puts
 * Return: 1 (Success)
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\n";
	write(2, msg, 59);
	return (1);
}
