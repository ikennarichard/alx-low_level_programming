#include "main.h"
/**
 * print_time_table - prints the n times table starting from 0
 * @n: input n
 */

void print_times_table(int n)
{
	int prod, times, no;

	if (n <= 15 && n >= 0)
	{
		for (no = 0; no <= n; ++no)
		{
			_putchar(48);
			for (times = 1; times <= n; ++no)
			{
				_putchar(',');
				_putchar(' ');

				prod = no * times;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if(prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				} else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
				_putchar('\n');
		}
	}
}
