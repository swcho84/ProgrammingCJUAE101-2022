#include <stdio.h>
#include <stdlib.h>

#define SIZEX		10

int main(void)
{
	int i, j;

	for (i = 0; i < SIZEX; i++)
	{
		for (j = 0; j < SIZEX; j++)
		{
			if ((i == j)||((i + j) == (SIZEX - 1)))
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}