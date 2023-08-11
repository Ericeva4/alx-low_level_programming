#include <stdio.h>
/**
 * main - This program prints the size of various types of computer
 * Return 0 (Successful)
 */
int main(void)
{
 	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unasigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unasigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unasigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unasigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unasigned long)sizeof(f));
return (0);
}
