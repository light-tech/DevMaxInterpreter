#include "common.h"

// Uncomment if you have set-up the headers
// #define HAS_STDC_HEADERS 1

#ifdef HAS_STDC_HEADERS
#include <math.h>
#include <stdio.h>
#include <string.h>
#else
extern "C" {
	// Add signature of these standard C functions
	// that we are using directly
	int sprintf(char *str, const char *format, ...);
	double exp (double x);
	double sin (double x);
	int round(double x);
	int strlen(const char *str);
}
#endif

void PrintDouble(double num)
{
	char buf[40];
	sprintf(buf, "%lf", num);
	PrintString(const_cast<const char*>(buf));
}

int main(int argc, const char **argv)
{
	PrintString("Hello world!\n");
	int a = (int) round(exp(1.5));
	int b = (int) round(10 * sin(1.5));
	int c = strlen("Hello world!");
	PrintString("e^2 = ");
	PrintDouble(exp(2.0));
	PrintString("\n");
	PrintString("sin(1) = ");
	PrintDouble(sin(1.0));

	return b;
}