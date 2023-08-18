#include "main.h"

/**
 * print_square - This function prints a square
 * @size: This is the size of the square
 * Discription: Use _putchar to print, use '#' to print square.
 */

void print_square(int size)
{
	int j, k;

	k = 0;

	if (size < 1)
		_putchar('\n');

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
