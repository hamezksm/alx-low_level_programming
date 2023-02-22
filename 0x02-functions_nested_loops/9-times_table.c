#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * times_table - tabulate tables upto nine
 */
void times_table(void)
{
	int i;
	int j;
	int pr;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			pr = i * j;
			if (strlen(pr + '0') == 1)
				printf(pr + ",  ");
			else
				printf(pr + ", ");
		}
	}
}
