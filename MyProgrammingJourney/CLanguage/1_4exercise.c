#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, step, upper;

	lower = 0;
	step = 20;
	upper = 300;
	
	celsius = lower;

	while (celsius <= upper)
	{
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%3.0f %8.1f\n", celsius, fahr);
		celsius += step;
	}
}

