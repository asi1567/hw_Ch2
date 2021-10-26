#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, z ;

	for (x = 1; x <= 500; x++)
	for (y = 1; y <= 500; y++)
	for (z = 1; z <= 500; z++)
	if ((x*x) + (y*y) == (z*z))
	{
		printf("side1 is %d\t side2 is %d\t hypotenuse is %d\n", x, y, z);
	}
}