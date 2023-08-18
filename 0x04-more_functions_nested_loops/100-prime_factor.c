#include <stdio.h>

/**
 * main - This function finds and prints the largest prime
 * factor of the following number 612852475143.
 * Return: Always return 0.
 */

int main(void)
{
	long prime = 612852475143, divisor;

	while (divisor < (prime / 2))
	{
		if ((prime % 2) == 0)
		{

			prime /= 2;
			continue;
		}

		for (divisor = 3; divisor < (prime / 2); divisor += 2)
		{
			if ((prime % division) == 0)
				prime /= divisor;
		}
	}

	printf("%1d\n", prime);
	return (0);
}
