/// Emulate assert() showing dialog when assertion fail

#include "common.h"

#ifdef HAS_STDC_HEADERS
#include <stdio.h>
#else
extern "C" {
	// Add signature of these standard C functions that we are using directly
	void *fopen(const char*, const char*);
	int fgetc(void *);
	void fclose(void *);
	#define EOF -1
}
#endif

int main(int argc, const char **argv)
{
	// Change path appropriately
	auto file = fopen("C:\\Users\\Owner\\AppData\\Local\\Publishers\\8vrbkgtyqrt4j\\C++Projects\\DevMaxInterpreterSamples\\web.cpp", "r");
	if (file == nullptr)
	{
		PrintString("Can't open file web.cpp\n");
		return -1;
	}
	int filesize = 0;
	while (fgetc(file) != EOF)
	{
		filesize++;
	}
	PrintString("Read ");
	PrintInt(filesize);
	PrintString(" bytes.\n");
	fclose(file);

	return 0;
}