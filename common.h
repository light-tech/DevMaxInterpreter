#ifndef __DEV_MAX_COMMON_INTERPRETER_DEBUG__

#ifdef __cplusplus
extern "C" {
#endif

void PrintString(const char *text);
void ShowMessageDialog(const char *title, const char *message);

#ifdef __cplusplus
} // extern "C"
#endif

void PrintInt(int a)
{
	char buf[12];
	char *e = buf + 10;
	buf[11] = '\0';
	int s = 1;
	if (a < 0)
	{
		s = -1;
		a = -a;
	}
	while (a > 0)
	{
		*e = (a % 10) + 48;
		a /= 10;
		e--;
	}
	if (s == -1)
		*e = '-';
	else
		e++;
	PrintString(const_cast<const char*>(e));
}

#endif