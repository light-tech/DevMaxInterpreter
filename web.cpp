#include "common.h"

extern "C" {
void* SendHttpRequest(const char *url);
void FreeHttpResponse(void *response);
int ReadHttpResponseContent(void *response, char *buf, int length);
}

#define BUFSIZE 10240

int main(int argc, const char **argv)
{
	PrintString("Fetch google.com                                                    \nResponse:\n");

	char buf[BUFSIZE + 1];
	buf[BUFSIZE] = '\0';
	auto response = SendHttpRequest("http://google.com");
	int totalsize = 0;
	while (1)
	{
		int r = ReadHttpResponseContent(response, buf, BUFSIZE);
		if (r >= 0)
		{
			buf[r] = '\0';
			// PrintString(buf);
			totalsize += r;
		}
		else
			break;
	}
	PrintInt(totalsize);
	PrintString(" bytes downloaded.\n");
	FreeHttpResponse(response);

	return 0;
}