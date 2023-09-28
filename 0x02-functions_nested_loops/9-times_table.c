#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0
*/
void times_table(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			int o = m * n;

			if (n == 0)
			{
				_putchar (o + '0');
			}
			if (o < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else if (o >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
		}
		 _putchar('\n');
	}
}
