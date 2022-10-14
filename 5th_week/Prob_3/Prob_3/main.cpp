#include <stdio.h>
#include <stdlib.h>

int CalcAdd(int nA, int nB)
{
	return nA + nB;
}

int CalcSub(int nA, int nB)
{
	return nA - nB;
}

int CalcMul(int nA, int nB)
{
	return nA * nB;
}

int CalcDiv(int nA, int nB)
{
	return nA / nB;
}

int CalcRem(int nA, int nB)
{
	return nA % nB;
}

int main(void)
{
	int nA = 0;
	int nB = 0;
	char chOper;

	printf("Input your arithmetic operation:\n");
	scanf_s("%d%c%d", &nA, &chOper, 1, &nB);

	//scanf_s("%d %c %d", &nA, &chOper, 1, &nB);

	//scanf_s("%d", &nA);
	//rewind(stdin);
	//scanf_s("%c", &chOper, 1);
	//rewind(stdin);
	//scanf_s("%d", &nB);

	switch (chOper)
	{
	case '+':
	{
		printf("Addition:\n");
		printf("%d %c %d = %d\n", nA, chOper, nB, CalcAdd(nA, nB));
		break;
	}
	case '-':
	{
		printf("Subtraction:\n");
		printf("%d %c %d = %d\n", nA, chOper, nB, CalcSub(nA, nB));
		break;
	}
	case '*':
	{
		printf("Multiplication:\n");
		printf("%d %c %d = %d\n", nA, chOper, nB, CalcMul(nA, nB));
		break;
	}
	case '/':
	{
		printf("Division:\n");
		printf("%d %c %d = %d\n", nA, chOper, nB, CalcDiv(nA, nB));
		break;
	}
	case '%':
	{
		printf("Reminder:\n");
		printf("%d %c %d = %d\n", nA, chOper, nB, CalcRem(nA, nB));
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