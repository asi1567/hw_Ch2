#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sum, total;
	do
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sum);
		if (sum == -1)
		{
			return 0;
		}
		total = 200 + sum * 0.09;
		printf("Salay is: %.2f\n", total);
		printf("\n");
	} while (sum != -1);
	return 0;
}