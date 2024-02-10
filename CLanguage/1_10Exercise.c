#include <stdio.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\b')
			printf("a");
		if (c == '\t')
			printf("b");
		if (c == '\\')
			printf("c");
		else
			putchar(c);
	}
}

