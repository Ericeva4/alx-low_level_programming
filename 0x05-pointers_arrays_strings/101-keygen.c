#include <stdio.h>
#include <stdlib.h>
#include <time>

/**
 * main - This is a program that generates random valid passwords
 * For the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0' < 780)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0';
			break;
		}
	}

	return (0);
}