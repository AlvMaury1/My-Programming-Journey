#include <stdio.h>

int main()
{
	int numbers;
	long n1, n2;
	scanf("%i", &numbers);
	for (int i  = 0; i < numbers-1; i++)
	{
		scanf("%ld %ld\n",&n1, &n2);
	

		printf("%ld\n", n1*n2);
	}

	printf("%ld", n1*n2);
}	
