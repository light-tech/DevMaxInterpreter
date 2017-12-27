/// Emulate assert() showing dialog when assertion fail

#include "common.h"

// Thanks to https://stackoverflow.com/questions/2670816/how-can-i-use-the-compile-time-constant-line-in-a-string
#define STRINGIZE(x) STRINGIZE2(x)
#define STRINGIZE2(x) #x
#define __LINE__STRING__ STRINGIZE(__LINE__)

#define assert(E) \
	if (!(E)) ShowMessageDialog("Assertion fails",\
	"Assertion " #E " in file " __FILE__ " on line " __LINE__STRING__);

int main(int argc, const char **argv)
{
	assert(0 != 0);

	return 0;
}