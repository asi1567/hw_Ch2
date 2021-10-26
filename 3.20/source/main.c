#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hours;
	float rate, salary;

	do
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hours);
		if (hours == -1)
		{
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		
		if (hours>40)
		{
			salary = 40*rate + (hours-40)*rate*1.5;
		}
		else
		{
			salary = hours * rate;
		}

		printf("Salary is $%.2f\n", salary);
		printf("\n");
	} while (hours != -1);
	return 0;
}