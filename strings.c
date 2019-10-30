#include "holberton.h"
/**
 * printRot - Print a string encoded a string into ROT13.
 * @toprint: Buffer to print the string
 * @s: String in natural language (without encode).
 *
 * Return: Number of characters printed
 */
int printRot(buf *toprint, char *s)
{
	if (s == NULL)
		return (printString(toprint, "(null)"));
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == src[j])
			{
				sendbuf(toprint, dest[j]);
				count++;
				break;
			}
}
