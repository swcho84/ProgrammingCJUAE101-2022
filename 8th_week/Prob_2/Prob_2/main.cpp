#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)
#define MAXLENGTH 80
#define REFLENGTH 5
#define CUTLENGTH REFLENGTH - 1

int main(void)
{
	char strInput[MAXLENGTH];
	char strOutput[MAXLENGTH] = "*";
	char* pStrInput = strInput;
	char* pStrOutput = strOutput;
	for (int i = 0; i < MAXLENGTH; i++)
	{
		strcat(strOutput, "*");
	}

	printf("Input your word:\n");
	scanf_s("%s", pStrInput, MAXLENGTH);
	printf("\n");

	int nStrLength = strlen(pStrInput);
	if (nStrLength > REFLENGTH)
	{
		strncpy(pStrOutput, pStrInput, CUTLENGTH);
		pStrOutput[nStrLength - 1] = '\0';
		printf("Your Input(length,string):%d, %s\n", nStrLength, pStrOutput);
	}
	else
	{
		strcpy(pStrOutput, pStrInput);
		printf("Your Input(length,string):%d, %s\n", nStrLength, pStrOutput);
	}

	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#pragma warning(disable:4996)
//#define MAXLENGTH 80
//#define REFLENGTH 5
//#define CUTLENGTH REFLENGTH - 1
//
//int main(void)
//{
//	char strInput[MAXLENGTH];
//	char* pStrInput = strInput;
//	char* pStrOutput = strInput;
//
//	printf("Input your word:\n");
//	scanf_s("%s", pStrInput, MAXLENGTH);
//	printf("\n");
//
//	int nStrLength = strlen(pStrInput);
//	if (nStrLength > REFLENGTH)
//	{
//		strncpy_s(pStrOutput, nStrLength, pStrInput, CUTLENGTH);
//		pStrOutput[REFLENGTH] = '\0';
//		for (int i = 0; i < nStrLength - REFLENGTH; i++)
//		{
//			strcat_s(pStrOutput, nStrLength, "*");
//		}
//		printf("Your Input(length,string):%d, %s\n", nStrLength, pStrOutput);
//	}
//	else
//	{
//		strncpy_s(pStrOutput, MAXLENGTH, pStrInput, nStrLength);
//		printf("Your Input(length,string):%d, %s\n", nStrLength, pStrOutput);
//	}
//
//	system("pause");
//	return 0;
//}