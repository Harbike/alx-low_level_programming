#include "main.h"
/**
 * main - Program that prints "_putchar"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int w;
char p[] = "_putchar";
for (w = 0; w < 9; w++)
{
_putchar(p[w]);
}
_putchar('\n');
return (0);
}
