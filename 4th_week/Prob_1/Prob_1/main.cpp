#include <stdio.h>
#include <stdlib.h>

#define MINCHESTSIZE	90
#define MAXCHESTSIZE	100

int main(void)
{
	int nChestSize = 0;
	char chChestSize;

	printf("Input your chest size:\n");
	scanf_s("%d", &nChestSize);

	if (nChestSize <= MINCHESTSIZE)
	{
		chChestSize = 'S';
	}
	else if ((nChestSize > MINCHESTSIZE) && (nChestSize <= MAXCHESTSIZE))
	{
		chChestSize = 'M';
	}
	else
	{
		chChestSize = 'L';
	}

	printf("Your Chest Size: %c\n", chChestSize);

	system("pause");
	return 0;
}