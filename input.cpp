#include "common.h"

extern "C" void ReadString(const char *title, char *buf, int length);

int main(int argc, const char **argv)
{
	PrintString("Hello ");

	char buf[100];
	ReadString("What is your name?", buf, 100);
	PrintString(buf);

	return 0;
}