#include <stdio.h>
#include <stdlib.h>

#define MINRANGE 1
#define MAXRANGE 9

int main(void)
{
	int nNumber = 0;
	printf("multiplication table:\n");

	for (int i = MINRANGE + 1; i <= MAXRANGE; i++)
	{
		for (int j = MINRANGE; j <= MAXRANGE; j++)
		{
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}