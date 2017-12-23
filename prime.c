#include "common.h"

int is_prime(int p)
{
	if (p < 0 || (p > 2 && p % 2 == 0))
		return 0;

	for (int d = 3; d < p; d += 2)
	{
		if (p % d == 0)
			return 0;
		if (d * d > p)
			break;
	}

	return 1;
}

/// Compute p_n (the n-th prime number)
/// p_1 = 2, p_2 = 3, ...
int prime_nth(int n)
{
	if (n <= 0)
		return 0;

	if (n == 1)
		return 2;

	n--;
	int p = 1;
	while (n > 0)
	{
		p += 2;
		if (is_prime(p))
			n--;
	}

	return p;
}

int main(int argc, const char **argv)
{
	PrintInt(prime_nth(25));

	return 0;
}