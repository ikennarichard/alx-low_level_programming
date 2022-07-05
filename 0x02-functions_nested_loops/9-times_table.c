#include "main.h"

/**
 * times_table: Print 9 times table starting from 0
 */
void times_table(void)
{
	int no, times, prod;

	for (no = 0; no <= 9; ++no)
	{
		_putchar(48);
		for (times = 1; times <= 9; ++times)
		{
			_putchar(',');
			_putchar(' ');

			prod = no * times

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}

