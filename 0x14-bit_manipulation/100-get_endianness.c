#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine
 * Return: 0 if the machine uses big endian, 1 if it uses little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

