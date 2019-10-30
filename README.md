#  PROJECT _PRINTF

### _printf FUNCTION

*Created a PRINTF function that mimics the original PRINTF in C programming.
Printf format string of which "printf" stands for "print formatted") refers to a
 control parameter used by a class of functions in the string-processing
 libraries of various programming languages. The format string is written in a
 simple template language, and specifies a method for rendering an arbitrary
number of varied data type parameters into a string. This string is then by
 default printed on the standard output stream, but variants exist that perform
 other tasks with the result, such as returning it as the value of the function.
 Characters in the format string are usually copied literally into the function's
 output, as is usual for templates, with the other parameters being rendered
 into the resulting text in place of certain placeholders  points marked by
format specifiers, which are typically introduced by a % character, though
syntax varies. The format string itself is very often a string literal, which
allows static analysis of the function call. However, it can also be the value
of a variable, which allows for dynamic formatting but also a security
vulnerability known as an uncontrolled format string exploit.*

###Code Examples

###### _printf("Lets print a simple sentence\n");

```#include <stdio.h>

int main()
{
    char *i = "holberton";

        printf("%s", i);
	return 0
}
```