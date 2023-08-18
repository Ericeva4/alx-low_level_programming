#include "main.h"

/**
 * print_square - This function prints a square
 * @size: This is the size of the square
 * Discription: Only _putchar to print, '#' can be used to print square.
 */

void print_square(int size)
{
	int j, k;

	k = 0;

	if (size < 1)
		putchar('\n');

	while (k < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		k++;
	}
}
