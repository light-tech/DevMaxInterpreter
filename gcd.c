#include "common.h"

int gcd(int a, int b)
{
	if (a < 0)
		a = -a;

	if (b == 0)
		return a;

	return gcd(b, a % b);
}

int main(int argc, const char **argv)
{
	PrintInt(gcd(-5, 10));

	return 0;
}