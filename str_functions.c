#include "monty.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Is a pointer.
 * @accept: Is a pointer.
 * Return: Return the number of bytes in s.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (a);
		}

		s++;
	}

	return (a);
}

/**
 * _strlen - returns the length of a string.
 * @s: Is an pointer.
 * Return: The length of a streng.
*/

unsigned int _strlen(char *s)
{
	unsigned int ls = 0;
	int st = *s;

	while (st != 0)
	{
		ls++;
		st = *s++;
	}

	if (ls > 0)
		return (ls - 1);

	else
		return (ls);
}

/**
 * _strcmp - Compares two strings.
 * @s1: Is a pointer.
 * @s2: Another pointer.
 * Return: Return the comparative of s1 and s2.
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
