#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first of strings
 * @s2: The second of all strings
 * @n: The maximum number of bytes to concatenate from the s2 one
 *
 * return: Pointer to the newly allocated memory with concat string
 * or maybe with NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ccted;
	unsigned int slen1, slen2, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	slen1 = strlen(s1);
	slen2 = strlen(s2);

	if (n >= slen2)
		n = slen2;

	ccted = malloc(sizeof(char) * (slen1 + n + 1));
	if (ccted == NULL)
		return (NULL);

	for (x = 0; x < slen1; x++)
		ccted[x] = s1[x];

	for (y = 0; y < n; y++, x++)
		ccted[x] = s2[y];

	ccted[x] = '\0';

	return (ccted);
}
