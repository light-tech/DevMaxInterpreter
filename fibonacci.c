#include "common.h"

int Fib(int n)
{
	if (n <= 1)
		return 1;
	else
		return Fib(n-1) + Fib(n-2);
}

int main(int argc, const char **argv)
{
	PrintInt(Fib(10));

	return 0;
}