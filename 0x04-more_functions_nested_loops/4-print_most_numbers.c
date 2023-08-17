#include "main.h"

/**
 * print_most_numbers - This function checks for for a digit(0 to 9)
 * Return: This will always return 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
