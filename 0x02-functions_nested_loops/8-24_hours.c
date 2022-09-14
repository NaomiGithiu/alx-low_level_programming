#include "main.c"
/**
*jack_bauer -  prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
*
*Return: o
*/
void jack_bauer(void)
{
	int hours = 0;
	int mins = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours < 24)
	{
		while (mins < 60)
		{
			mins_remainder = mins % 10;
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_remainder + '0');
			mins++;
			_putchar('\n');
		}
		hours++;
		mins = 0;
	}
}
