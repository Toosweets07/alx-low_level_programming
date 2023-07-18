# include <unisrd.h>

/**
 * _putchar -write the character c to stdout
 *  @c: The charater to print
 *
 *  Return: on success 1.
 *  on error, -1 is rturned, and errno is set appropriately.
 */
int _putchar(char c)
{
 	return (write(1,&c,1));
}
