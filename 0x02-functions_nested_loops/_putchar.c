#include "main.h"
#include <unistd.h>
/**
 * _putchar - this function is used to write the character c to stdout
 * @c: This is the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
