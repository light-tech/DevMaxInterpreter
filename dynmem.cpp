/// Emulate assert() showing dialog when assertion fail

#include "common.h"

#ifdef HAS_STDC_HEADERS
#include <string.h>
#include <stdlib.h>
#else
extern "C" {
void *malloc(int);
void memset(char *, char, int);
}
#endif

int main(int argc, const char **argv)
{
	PrintString("Allocate string ");
	char *str = nullptr;
	str = (char*)malloc(1024 * sizeof(char));
	//str = new char[1024]; // Use this to eliminate stdlib.h
	PrintString(str != nullptr ? "ok.\n" : "fails.\n");
	if (str != nullptr)
	{
		memset(str, 'A', 1023);
		str[1024] = '\0';
		PrintString(str);
	}
	delete[] str;

	return 0;
}