#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int AN;
	float BB, TC, TCR, CL, BB_NEW;
	do
	{
		printf("Enter account number(-1 to end): ");
		scanf_s("%d", &AN);
		if (AN == -1)
		{
			return 0;
		}
		printf("Enter beginning balance: ");
		scanf_s("%f", &BB);
		printf("Enter total charges: ");
		scanf_s("%f", &TC);
		printf("Enter total credits: ");
		scanf_s("%f", &TCR);
		printf("Enter credit limit: ");
		scanf_s("%f", &CL);

		BB_NEW = BB + TC - TCR;

		printf("Account:     %d\n", AN);
		printf("Credit limit:%.2f\n", CL);
		printf("Balance:     %.2f\n", BB_NEW);
		if (BB_NEW > CL)
		{
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	} while (AN != -1);
		return 0;
}