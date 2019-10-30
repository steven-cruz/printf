#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct buffer - This structure define a buffer used to storage the
 * characters to print in the standart output.
 * @alm: pointer to the buffer.
 * @pos: num of bytes used for the buffer.
 */
typedef struct buffer
{
	char *alm;
	int pos;
} buf;

int _printf(const char *format, ...);
int conv(buf *toprint, const char *p, va_list lista);

int printChar(buf *toprint, char c);
int printString(buf *toprint, char *s);

int printInt(buf *toprint, int num);
int printDec(buf *toprint, int num);

int printBin(buf *toprint, unsigned int num);
int printU(buf *toprint, unsigned int num);
int printO(buf *toprint, unsigned int num);
int printHex(buf *toprint, unsigned int num);
int printHEX(buf *toprint, unsigned int num);

void sendbuf(buf *toprint, char c);
buf *createBuf();
void printBuffer(buf *toprint);
void freeBuf(buf *toPrint);




int _strlen(char *s);

#endif

