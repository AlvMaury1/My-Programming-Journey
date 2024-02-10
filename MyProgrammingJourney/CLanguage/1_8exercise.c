#include <stdio.h>

int main()
{
	int c, nc = 0;

	while ((c = getchar()) != EOF)
	{
		if ( c == ' ' || c == '\n' || c == '\t')
			++nc;
	}
	printf("%d\n", nc);
}

