#include "main.h"
#include <stdio.h>
/**
 * times_table - tabulate tables upto nine
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (strlen(i * j == 1)
				printf(i * j + ",  ");
			else
				printf(i * j + ", ");
		}
	}
}
