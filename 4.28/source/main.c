#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int code,hours;
	float pay, sales, wage;
	char sign = '%';

	printf("Enter the paycode: ");
	scanf_s("%d", &code);

	switch (code)
	{
	case 1:
		printf("paycode 1--managers\n");
		printf("receive a fixed weekly salary\n");
		printf("Enter the weekly salary: ");
		scanf_s("%f", &pay);
		printf("The weekly salary is $%.1f", pay);
		break;
	case 2:
		printf("paycode 2--hourly workers\n");
		printf("receive a fixed hourly wage up to the first 40 hours and 1.5 times their hourly wage for overtime hours worked\n");
		printf("Enter the hourly wage and worked hours: ");
		scanf_s("%f%d", &wage, &hours);
		if (hours > 40)
		{
			pay = wage * 40 + (hours - 40)*wage*1.5;
		}
		else
			pay = wage * hours;	
		printf("The weekly salary is $%.1f", pay);
		break;
	case 3:
		printf("paycode 3--commission workers\n");
		printf("receive $250 plus 5.7%c of their gross weekly sales\n",sign);
		printf("Enter the gross weekly sales: ");
		scanf_s("%f", &sales);
		pay = 250 + sales * 5.7 / 100;
		printf("The weekly salary is $%.1f", pay);
		break;
	case 4:
		printf("paycode 4--pieceworkers\n");
		printf("receive a fixed amount of money for each of the items they product\n");
		printf("Enter the fixed amount of money:");
		scanf_s("%f", &pay);
		printf("The weekly salary is $%.1f", pay);
		break;
	}
}