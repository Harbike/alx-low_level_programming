#include "main.h"
#include "main.c"
/**
*main - entry point
*_memset -fills the memory area pointed to
*@s: pointer to starting memory
*@b: constant byte
*@n: bytes of memory area
*Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
while (n > 0)
{
s[a] = b;
a++;
n--;
}
return (s);
}
