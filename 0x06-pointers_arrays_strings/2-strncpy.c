#include "main.h"

/**
 * _strncpy - a function that copies a string from src into dest
 *  @dest: first string
 *  @src: second string
 *  @n: nuber of bytes
 *  Return: stirng after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
