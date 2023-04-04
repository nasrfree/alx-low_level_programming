#include "main.h"
/**
 * _memset - filling in a specific value for a memory blocl
 * @s: fill starting address of memory 
 * @b: required value
 * @n: change number of bytes
 *
 * Return: new array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
