#include <stdio.h>
/**
*main - print lowercase alphabets except q and e
*
*Return: 0 (success)
*/
int main(void)
{
char b;
for (b = 'a'; b <= 'z'; b++)
{
if (b != 'q' && b != 'e')
{
putchar(b);
}
}
putchar('\n');
return (0);
}
