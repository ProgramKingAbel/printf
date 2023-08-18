#include <unistd.h>

/**
 * _putchar - Entry point that outputs xter to standard output
 * @a: xter to be output
 * Return: Always (Success)? 1 : -1
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
