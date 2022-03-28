#include "main.h"

int in_accept(char c, char *accept);

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string containing the only accepted characters
 *
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (in_accept(s[i], accept))
			length++;
		else
