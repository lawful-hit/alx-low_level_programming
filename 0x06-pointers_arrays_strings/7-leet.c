#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: the value of n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; j < 10; j++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
}
