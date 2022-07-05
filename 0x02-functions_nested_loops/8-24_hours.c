#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int m, hr;

	for (hr = 0; hr <= 23; ++hr)
	{
		for (m = 0; m <= 59; ++m)
		{
		_putchar((hr / 10) + 48);
		_putchar((hr % 10) + 48);
		_putchar(':');
		_putchar((m / 10) + 48);
		_putchar((m % 10) + 48);
		_putchar('\n');
		}
	}
}
