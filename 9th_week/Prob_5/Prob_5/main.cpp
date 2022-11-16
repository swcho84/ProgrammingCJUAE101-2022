#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMELENGTH				80
#define TOTALNUMSUBJECT		3

enum GRADE { F, C = 7, B, A };

typedef enum {CYAN, MAGNETA, YELLOW = 5, BLACK} COLOR;
typedef enum {UP, DOWN, LEFT, RIGHT} ARROW;

typedef struct
{
	int nID;
	char strName[NAMELENGTH];
}StudentProfile;

typedef struct
{
	int nKorean;
	int nEnglish;
	int nMath;
}StudentSubject;

typedef struct
{
	StudentProfile prof;
	StudentSubject subj;
	float fTotal;
	float fAvg;
	char chGrade;
}StudentInfo;

void SwapStudentInfo(StudentInfo *input, int nIndA, int nIndB)
{
	StudentInfo temp = input[nIndA];
	input[nIndA] = input[nIndB];
	input[nIndB] = temp;
}

void PrintingResult(StudentInfo *input, int nNum)
{
	for (int i = 0; i < nNum; i++)
	{
		printf("%d %s\t%d  %d  %d\t%2.4f  %2.4f  %c\n",
			input[i].prof.nID,
			input[i].prof.strName,
			input[i].subj.nKorean,
			input[i].subj.nEnglish,
			input[i].subj.nMath,
			input[i].fTotal,
			input[i].fAvg,
			input[i].chGrade
		);
	}
}

int main(void)
{
	// allocating the memory
	int nTotalNumStudent;
	printf("Input Total Number of Student:\n");
	scanf_s("%d", &nTotalNumStudent);
	StudentInfo* studentInfo = {};
	studentInfo = (StudentInfo*)(malloc(nTotalNumStudent * sizeof(StudentInfo)));

	//COLOR myColor = YELLOW;
	//int c;
	//ARROW direction = UP;
	//int d = direction;

	//for (c = CYAN; c <= BLACK; c++)
	//{
	//	d++;
	//	d = d % 4;
	//	if (c == myColor)
	//		break;
	//}

	//switch (direction)
	//{
	//case UP:printf("curr.direc.:up\n"); break;
	//case DOWN:printf("curr.direc.:down\n"); break;
	//case LEFT:printf("curr.direc.:left\n"); break;
	//case RIGHT:printf("curr.direc.:right\n"); break;
	//}


	// generating the student data
	printf("\n");
	for (int i = 0; i < nTotalNumStudent; i++)
	{
		printf("[%d]ID:", i);
		scanf_s("%d", &(studentInfo[i].prof.nID));
		getchar();

		printf("[%d]Name:", i);
		scanf_s("%s", &(studentInfo[i].prof.strName), NAMELENGTH);
		getchar();

		printf("[%d]Points(Korean,English,Math):", i);
		scanf_s("%d%d%d", &(studentInfo[i].subj.nKorean), &(studentInfo[i].subj.nEnglish), &(studentInfo[i].subj.nMath));
		getchar();
		
		// for debugging
		// printf("%d, %s, (%d,%d,%d)\n", studentInfo[i].prof.nID, studentInfo[i].prof.strName, studentInfo[i].subj.nKorean, studentInfo[i].subj.nEnglish, studentInfo[i].subj.nMath);
	}

	// calculating the student data (total, avg, grade)
	for (int i = 0; i < nTotalNumStudent; i++)
	{
		studentInfo[i].fTotal = (float)(studentInfo[i].subj.nKorean + studentInfo[i].subj.nEnglish + studentInfo[i].subj.nMath);
		studentInfo[i].fAvg = (studentInfo[i].fTotal)/(TOTALNUMSUBJECT);
		switch ((int)(studentInfo[i].fAvg / 10.0))
		{
			default:
			case F:
			{
				studentInfo[i].chGrade = 'F';
				break;
			}
			case C:
			{
				studentInfo[i].chGrade = 'C';
				break;
			}
			case B:
			{
				studentInfo[i].chGrade = 'B';
				break;
			}
			case A:
			{
				studentInfo[i].chGrade = 'A';
				break;
			}
		}
	}

	// printing results
	printf("\nBeforeArrainging...\n");
	PrintingResult(studentInfo, nTotalNumStudent);

	// sorting the student data (using avg)
	for (int i = 0; i < nTotalNumStudent; i++)
	{
		for (int j = i; j < nTotalNumStudent ; j++)
		{
			if (studentInfo[i].fAvg < studentInfo[j].fAvg)
				SwapStudentInfo(studentInfo, i, j);
		}
	}

	// printing results
	printf("\nAfterArrainging...\n");
	PrintingResult(studentInfo, nTotalNumStudent);

	system("pause");
	return 0;
}