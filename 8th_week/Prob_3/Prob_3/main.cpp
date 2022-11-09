#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)
#define COUNTWORD	3
#define MAXLENGTH 80

void SwapStr(char* pStrInput[], int a, int b)
{
	char* pStrTemp = pStrInput[a];
	pStrInput[a] = pStrInput[b];
	pStrInput[b] = pStrTemp;
}

int main(void)
{
	char strWord[COUNTWORD][MAXLENGTH];
	char* pStrWord[COUNTWORD];
	printf("Input your three words:\n");
	for (int i = 0; i < COUNTWORD; i++)
	{
		gets_s(strWord[i], MAXLENGTH);
	}

	for (int i = 0; i < COUNTWORD; i++)
	{
		pStrWord[i] = strWord[i];
	}

	for (int i = 0; i < COUNTWORD; i++)
	{
		for (int j = 1; j < COUNTWORD - 1; j++)
		{
			if (strcmp(pStrWord[i], pStrWord[j]) > 0)
			{
				SwapStr(pStrWord, i, j);
			}
		}
	}

	printf("After arranging..\n");
	for (int i = 0; i < COUNTWORD; i++)
	{
		printf("[%d]%s\n", i, pStrWord[i]);
	}

	system("pause");
	return 0;
}