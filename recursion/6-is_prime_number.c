#include "main.h"

/**
 * is_prime_helper - Helper function to check for factors of n.
 * @n: The number to check for primality.
 * @i: The current divisor being checked.
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_helper(int n, int i)
{
    if (i * i > n)
        return (1);
    if (n % i == 0)
        return (0);
    return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 * Return: 1 if n is prime, 0 if not.
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (is_prime_helper(n, 2));
}
