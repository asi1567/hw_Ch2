#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '+';
	char sign2 = ' ';
	int length = 3;
	int	breadth = 12;

	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= breadth; j++)
		{
			if ((j == 1) || (j == 12) || (i == 1) || (i == 3))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
}