#include "main.h"
/**
*_puts- pri
nts a string to stdout
*@str: value to be evaluated
*Return:(0)
*/
void _puts(char *str)
{
int a = 0;
while (*(str + a) != '\0')
{
_putchar(str[a])
a++;
}
_putchar('\n');
}
