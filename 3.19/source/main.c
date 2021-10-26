#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float LP,IR,IC;
	int LD;

	do
	{
		printf("Enter loan principal(-1 to end): ");
		scanf_s("%f", &LP);
		if (LP == -1)
		{
			return 0;
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &IR);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &LD);
		
		IC = LP * IR * LD/365;

		printf("The interest charge is %.2f\n", IC);
		printf("\n");
	} while (LP != -1);
	return 0;
}