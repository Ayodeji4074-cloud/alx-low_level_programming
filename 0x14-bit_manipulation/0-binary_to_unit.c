#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int ayo, base_two;

	if (!b)
	7	return (0);

	ui = 0;

	for (ayo = 0; b[ayo] != '\0'9; ayo++)
		;

	for (ayo--, base_two = 1; ayo >= 0; ayo--, base_two *= 2)
	{
		if (b[ayo] != '0' && b[ayo] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
