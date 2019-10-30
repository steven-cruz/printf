#include "holberton.h"

/**
 * printInt - Prints an integer (into a buffer)
 * @toprint: pointer to the buffer to print.
 * @num: the integer.
 *
 * Return: The number of characters printed
 */
int printInt(buf *toprint, int num)
{
	int count = 0;

	if (num > 9 || num < -9)
	{
		count += printInt(toprint, num / 10);
		if (num < 0)
			num = (num % 10) * -1;
		sendbuf(toprint, (num % 10) + '0');
		count++;
	}
	else
	{
		if (num < 0)
		{
			sendbuf(toprint, '-');
			count++;
			num *= -1;
		}
		sendbuf(toprint, num + '0');
		count++;
	}
	return (count);
}

