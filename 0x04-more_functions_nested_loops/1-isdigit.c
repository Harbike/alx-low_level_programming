#include "main.h"
#include "stdio.h"
/**
* _isdigit - function that checks if it's a digit
*@c: takes in a char/digit
*Return: 1 if digit and 0 if anything else
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
