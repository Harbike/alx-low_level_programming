#include <unistd.h>
/**
*_putchar -writes the character a to stdout
*@a: the character to print
*Return: On success 1.
*On error, -1 is returned, and errNo is set
*/
int _putchar(char a)
{
return (write(1, &a, 1));
}
