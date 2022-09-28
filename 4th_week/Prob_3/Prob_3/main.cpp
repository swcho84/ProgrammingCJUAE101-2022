#include <stdio.h>
#include <stdlib.h>

// arithmetic operation

int main(void)
{
	int nA = 0;
	int nB = 0;
	char chOper;

	printf("Input your arithmetic operation:\n");
	scanf_s("%d%c%d", &nA, &chOper, 1, &nB);

	switch (chOper)
	{
		case '+':
		{	
			printf("Addition:\n");
			int nRes = nA + nB;
			printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
			break;
		}
		case '-':
		{
			printf("Subtraction:\n");
			int nRes = nA - nB;
			printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
			break;
		}
		case '*':
		{
			printf("Multiplication:\n");
			int nRes = nA * nB;
			printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
			break;
		}
		case '/':
		{
			printf("Division:\n");
			int nRes = nA / nB;
			printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
			break;
		}
		case '%':
		{
			printf("Reminder:\n");
			int nRes = nA % nB;
			printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
			break;
		}
		default:
		{
			printf("Error: you should check your input...\n");
			break;
		}
	}

	system("pause");
	return 0;
}