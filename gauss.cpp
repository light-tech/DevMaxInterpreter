#include "common.h"

#include <stdio.h>
#include <complex>

class GaussInt
{
public:
	GaussInt(int a, int b) { x = a; y = b; }
	int x, y;
	int Norm() { return x*x + y*y; }
	GaussInt Conj() { return GaussInt(x, -y); }
};

void PrintDouble(double num)
{
	char buf[40];
	sprintf(buf, "%lf", num);
	PrintString(const_cast<const char*>(buf));
}

int main(int argc, const char **argv)
{
	GaussInt z(3, 4);
	PrintInt(z.Norm());

	std::complex<double> w(3.0, 4.0);
	w *= w;
	PrintString("\n(3 + 4i)^2 = ");
	PrintDouble(w.real());
	PrintString(" + ");
	PrintDouble(w.imag());
	PrintString("i\n");

	return 0;
}