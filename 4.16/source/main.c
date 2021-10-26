#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';

	printf("(A)\n");
	for (int i = 1 ; i <= 10 ; i++)
	{
		for (int j = 0 ; j < i ; j++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	printf("(B)\n");
	for (int i = 10 ; i >= 1 ; i--)
	{
		for (int j = i ; j > 0 ; j--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	printf("(C)\n");
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 10 - i; j > 0; j--)
		{
			printf("%c", sign2);
		}
		for (int k = i; k > 0; k--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}

	printf("(D)\n");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 0; j < 10-i; j++)
		{
			printf("%c", sign2);
		}
		for (int k = 0; k < i; k++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
}