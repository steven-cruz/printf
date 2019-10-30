<<<<<<< HEAD
include "holberton.h"
=======
#include "holberton.h"
>>>>>>> 0d3dbdf34cd9a29da0ee1d52d5e2aa244fbfffc0

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
<<<<<<< HEAD
=======

>>>>>>> 0d3dbdf34cd9a29da0ee1d52d5e2aa244fbfffc0
