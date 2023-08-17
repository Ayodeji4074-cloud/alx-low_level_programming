#include <stdio.h>
#include <stdlib.h>

#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that do the sum of two integers a and b
 * @a: number 1
 * @b: number 2
 * return: return a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that do the subtraction of two integers a and b
 * @a: number 1
 * @b: number 2
 * return: return a - b
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - a function that do the multiplication of two integers a and b
 * @a: number 1
 * @b: number 2
 * return: return a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides an int with another int
 * @a: number 1
 * @b: number 2
 * return: return a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

