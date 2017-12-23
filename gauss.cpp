#include "common.h"

class GaussInt
{
public:
	GaussInt(int a, int b) { x = a; y = b; }
	int x, y;
	int Norm() { return x*x + y*y; }
	GaussInt Conj() { return GaussInt(x, -y); }
};

int main(int argc, const char **argv)
{
	GaussInt z(3, 4);
	PrintInt(z.Norm());

	return 0;
}