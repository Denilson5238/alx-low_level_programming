#include <unistd.h>


/**
 * _putchar - will writes the character c to the stdout
 * @c: The character will print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

