#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where  stored
 *@src: memory where copied
 *@n: n of bytes
 *
 *Return: copied memory with n bytes change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
