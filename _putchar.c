#include <unistd.h>

/**
 * _putchar - write a character to the stdout
 * @c: character to input to the stdout
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
