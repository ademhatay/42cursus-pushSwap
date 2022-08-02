#include "push_swap.h"

void alert(char *type, char *msg)
{
	char *error = "ERR";
	char *success = "SUCCESS";
	char *delete = "DEL";

	if (type == error)
		printf(ANSI_COLOR_RED"%s\n" ANSI_COLOR_RESET, msg);
	else if (type == success)
		printf(ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET, msg);
	else if (type == delete)
		printf(ANSI_COLOR_MAGENTA "%s" ANSI_COLOR_RESET, msg);
	else
		printf("%s\n", msg);
}
