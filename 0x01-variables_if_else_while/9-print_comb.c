#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succesful)
 */

int main(void)
	{
	int a;

	for (a = 0; a < 10; a++)
	{
		pitchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			puchar (' ');
		}
	}
	putchar('\n');
	return (0);
	}
