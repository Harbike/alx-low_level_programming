#include <stdio.h>
/**
*main - prints alphabet in lowercase followed by a new line
*Return: 0 (success)
*/
int main(void)
{
char b;
 for (b = 'a'; b <= 'z'; b++)
{
putchar(b);
putchar('\n');
}
return (0);
}
