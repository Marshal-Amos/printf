#include "main.h"

/**
 * print_char - a function that prints char data types
 *
 * @ap: characters to be printed
 *
 * Return: an integer value of 1
 */
int print_char(va_list ap)
{
	writer_func(va_arg(ap, int));
	return (1);
}

/**
 * print_string - a function that prints stringg data types
 *
 * @ap: list of strings tro be printed
 *
 * Return: the number of characters printed
 */
int print_string(va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		writer_func(str[i]);
	}
	return (i);
}

/**
 * print_percent - a function that prints percent sign
 *
 * @ap: list of characters provided
 *
 * Return: the number of signs printed
 */
int print_percent(__attribute__((unused)) va_list ap)
{
	writer_func('%');
	return (1);
}

