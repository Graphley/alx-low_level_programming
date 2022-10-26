#include <unistd.h>

/**
 * _putchar.c - writes the character c to stdout
 * @c: the char to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
