#include <stdio.h>

int main()
{
	int fahr;
	float celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table */
	upper = 300; /*upper limit */
	step = 20; /* step size*/

	fahr = lower;

	printf("celsius   farenheit\n");
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3d %8.1f\n" , fahr, celsius);
		fahr += step;
	}
}

