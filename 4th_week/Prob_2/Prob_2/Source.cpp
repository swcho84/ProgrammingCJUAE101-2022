#include <stdio.h>
#include <stdlib.h>

#define AGETHRESH			20

int main(void)
{
	int nAge = 0;
	int nChestSize = 0;
	char chChestSize;

	printf("Input your age and chest size:\n");
	scanf_s("%d%d", &nAge, &nChestSize);

	int nMinChestSize = 0;
	int nMaxChestSize = 0;
	if (nAge > AGETHRESH)
	{
		nMinChestSize = 90;
		nMaxChestSize = 100;
	}
	else
	{
		nMinChestSize = 85;
		nMaxChestSize = 95;
	}


	if (nChestSize <= nMinChestSize)
	{
		chChestSize = 'S';
	}
	else if ((nChestSize > nMinChestSize) && (nChestSize <= nMaxChestSize))
	{
		chChestSize = 'M';
	}
	else
	{
		chChestSize = 'L';
	}

	printf("Your Age and Chest Size: %d, %c\n", nAge, chChestSize);

	system("pause");
	return 0;
}