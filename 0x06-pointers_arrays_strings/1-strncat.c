#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * but it will use at most n bytes from src
 * @dest: first string
 * @src: second string
 * @n: number of bytes used
 * Return: string after concatination
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
