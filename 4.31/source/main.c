#include <stdio.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';

	for (int i = 0 ; i <= 3 ; i++)
	{
		for (int j = 0 ; j <= 3-i ; j++)
		{
			printf("%c", sign2);
		}
		for (int k = 0 ; k <= 2*i ; k++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	for (int n = 0 ; n <= 4 ; n++)
	{
		for (int l = 0; l < n; l++)
		{
			printf("%c", sign2);
		}
		for (int m = 0; m < 9 - 2 * n; m++)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
}