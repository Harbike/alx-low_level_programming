#include <stdio.h>
/**
 * main -check the code
 *
 * Return: Always 0.
 *int main(void)
 *{
 *char s1[98] = "Hello ";
 *char s2[] = "World!\n";
 *char *ptr;
 *printf("%s\n", s1);
 *printf("%s", s2);
 *ptr = _strcat(s1, s2);
 *printf("%s", s1);
 *printf("%s", s2);
 *printf("%s", ptr);
 *return (0);
 }*/
#ifndef _MAIN_
#define _MAIN_

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);


#endif