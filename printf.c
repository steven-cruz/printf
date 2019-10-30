#include "holberton.h"

/**
 * _printf - Our own printf function
 * @format: String to print (may include modifiers of format)
 *
 * Return: Number of characters printed, or -1 if fail
 */
int _printf(const char *format, ...)
{
	int pos = 0, printed = 0, tmp;
	buf *toPrint = createBuf();
	va_list list, aux;

	if (format == NULL)
		return (-1);
	if (*format == '\0')
		return (0);

	va_start(list, format);
	while (format[pos] != '\0')
	{
		if (format[pos] == '%')
		{
			va_copy(aux, list);
			tmp = conv(toPrint, format + pos, aux);
			if (tmp == -1)
				return (-1);
			printed += tmp;
			va_end(aux);
			pos += 2;
			/*
			 * TODO: Pending modification when adding other specifiers.
			 */
			continue;
		}
		printed += printChar(toPrint, format[pos]);
		pos++;
	}

	va_end(list);
	freeBuf(toPrint);

	return (printed);
}


/**
 * conv - Select the conversion specifiers accord the case, and call a
 * function.
 * @toprint: Buffer to print the output
 * @p: Format string that contain the conversion specifiers
 * @lista: List of arguments
 *
 * Return: Number of characters printed
 */
int conv(buf *toprint, const char *p, va_list lista)
{
	switch (*(p + 1))
	{
		case 'c':
			return (printChar(toprint, va_arg(lista, int)));
		case 's':
			return (printString(toprint, va_arg(lista, char*)));
		case 'd':
		case 'i':
			return (printInt(toprint, va_arg(lista, int)));
		case 'b':
		case 'u':
		case 'o':
		case 'x':
		case 'X':
		case 'S':
		case 'p':
		case 'l':
		case 'h':
		case 'r':
		case 'R':
			return (0);
		case '%':
			return (printChar(toprint, '%'));
		case '\0':
		case ' ':
			return (-1);
		default:
			printChar(toprint, '%');
			printChar(toprint, *(p + 1));
			return (2);
	}
	va_end(lista);
	return (1);
}
