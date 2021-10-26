#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n=10;
	char sign = '%';

	for (int i = 0; i < 15; i++)
	{
		printf("The interest rate is: %.1f %c\n", n,sign);
		n = n + 0.5;
	}
}