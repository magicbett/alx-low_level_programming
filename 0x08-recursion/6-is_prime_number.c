#include "main.h"
/**
 * primenumber - checks if a given number is prime
 * @n: given number
 * @m: checker number
 * Return: 1 if number is prime else 0
 **/
int primenumber(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0)
		return (0);
	return (primenumber(n, m - 1));
}
/**
 * is_prime_number - checks if a given number is prime
 * @n: given number
 * Return: 1 if number is prime else 0
 **/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenumber(n, n / 2));
}
